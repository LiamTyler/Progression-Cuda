#pragma once

#include "core/game_object.h"
#include "types/lights.h"
#include "core/camera.h"
#include "graphics/skybox.h"
#include "graphics/material.h"
#include "graphics/shader.h"
#include "graphics/model.h"
#include <mutex>

typedef struct RTSkyboxInfo {
    RTSkyboxInfo() {}
    RTSkyboxInfo(std::string l, std::string r, std::string t, std::string b, std::string f, std::string bk) :
        left(l), right(r), top(t), bottom(b), front(f), back(bk) {}

    std::string left;
    std::string right;
    std::string top;
    std::string bottom;
    std::string front;
    std::string back;
} RTSkyboxInfo;


namespace Progression {

    class Scene {
    public:
        Scene(unsigned int maxObjects = 1000000, unsigned int maxLights = 100000);
        ~Scene();

        static Scene* Load(const std::string& filename);
        static bool Save(const std::string& filename);

        void Update();

        void AddGameObject(GameObject* o);
        void RemoveGameObject(GameObject* o);
        GameObject* GetGameObject(const std::string& name) const;
        void GetNeighbors(GameObject* o, float radius, std::vector<GameObject*>& neighborList);

        bool AddLight(Light* light);
        void RemoveLight(Light* light);

        void AddCamera(Camera* camera, bool setMain = false);
        void RemoveCamera(Camera* camera);
        Camera* GetCamera(int index = 0) { return cameras_[index]; }

        void GenerateVisibilityList();

        std::vector<Light*>& GetPointLights() { return pointLights_; }
        std::vector<Light*>& GetDirectionalLights() { return directionalLights_; }
        unsigned int GetNumPointLights() const { return pointLights_.size(); }
        unsigned int GetNumDirectionalLights() const { return directionalLights_.size(); }
        const std::vector<GameObject*>& GetGameObjects() const { return gameObjects_; }
        glm::vec4 GetBackgroundColor() const { return backgroundColor_; }
        void SetBackgroundColor(const glm::vec4& color) { backgroundColor_ = color; }
        std::shared_ptr<Skybox> getSkybox() const { return skybox_; }
        void setSkybox(std::shared_ptr<Skybox> skybox) { skybox_ = skybox; }
        RTSkyboxInfo getRTSkybox() const { return rtskybox; }

    protected:
        unsigned int maxGameObjects_;
        unsigned int maxLights_;

        std::vector<GameObject*> gameObjects_;
        std::vector<Light*> directionalLights_;
        std::vector<Light*> pointLights_;
        std::vector<Camera*> cameras_;

        RTSkyboxInfo rtskybox;

        glm::vec4 backgroundColor_;
        std::shared_ptr<Skybox> skybox_;

        // scene file parser helpers
        static void ParseCamera(Scene* scene, std::ifstream& in);
        static void ParseLight(Scene* scene, std::ifstream& in);
        static void ParseGameObject(Scene* scene, std::ifstream& in);
    };

} // namespace Progression
