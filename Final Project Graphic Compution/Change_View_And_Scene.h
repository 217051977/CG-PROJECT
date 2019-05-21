#pragma once

void changeViewAndScene(int scene, int view) {

	scene_To_print = scene;

	perspective_Or_Animation = view;

}

void changeView(int view) {

    scene_To_print = 0;

    perspective_Or_Animation = view;

}