#include "Step.h"

Step::Step (Minecraft *mc) {
    stepHeight = 1;
}

void Step::Run() {
	*player->stepHeight() = stepHeight;
}

void Step::onDisable() {
	if (player == nullptr) return;
	*player->stepHeight() = 0.5625f;
}

void Step::renderSettings() {
  ImGui::SliderFloat("step height", &stepHeight, 0.5625, 3);
}
