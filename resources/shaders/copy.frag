#version 430 core

in vec2 UV;

uniform sampler2D tex;

out vec4 finalColor;

void main() {	
	// finalColor = texture(tex, UV);
	finalColor = texture(tex, vec2(UV.x, 1 - UV.y));
}
