#include "core/transform.h"

namespace Progression {

	Transform::Transform(const glm::vec3& pos, const glm::vec3& rot, const glm::vec3& sc) :
		position(pos),
		rotation(rot),
		scale(sc)
	{
	}

	glm::mat4 Transform::GetModelMatrix() const {
		glm::mat4 model(1);
		model = glm::translate(model, position);
		model = glm::rotate(model, rotation.z, glm::vec3(0, 0, 1));
		model = glm::rotate(model, rotation.y, glm::vec3(0, 1, 0));
		model = glm::rotate(model, rotation.x, glm::vec3(1, 0, 0));
		model = glm::scale(model, scale);

		return model;
	}

} // namespace Progression
