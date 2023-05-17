Vim�UnDo� ����l	*�̸h}�+>���\��e�$�����   P                                   d7�     _�                      A        ����                                                                                                                                                                                                                                                                                                                                                             d7�     �               P   c// ================================================================================================   /**   @ *   @copyright  Ocelot - Copyright (c) 2022 Konami Gaming, Inc.    *   + *   @file       samples/animation/main.cpp    *   @author     Shannon Curtin    *   @date       01/20/2023   5 *   @brief      Entry point for the animation sample    **/   c// ================================================================================================   /*   d----------------------------------------------------------------------------------------------------   %Date        | Author    | Description   d----------------------------------------------------------------------------------------------------   001/20/2023    SJC         Initial implementation   d----------------------------------------------------------------------------------------------------   */   #include <iostream>   #include "Scene.h"   $#include "ocelot/core/Application.h"   #include "ocelot/core/Layer.h"   &#include "ocelot/core/OpenGLContext.h"   #include "ocelot/core/Scene.h"   &#include "ocelot/core/WindowBuilder.h"   &#include "ocelot/render/GraphicsAPI.h"   *#include "ocelot/render/RendererFactory.h"   #include "ocelot/util/Log.h"       (class Layer : public ocelot::core::Layer   {       public:   J    Layer(ocelot::core::Window &window, int screenWidth, int screenHeight)       {           using namespace ocelot;   ]        auto renderer = render::buildSharedRendererEasy(render::GLES2, render::POLICY_QUEUE);   8        auto target   = renderer->defaultRenderTarget();   a        auto scene    = core::Scene<sample::animation::AnimationScene>("root", renderer, target);   T        sample::animation::buildScene(scene.sceneData(), screenWidth, screenHeight);            scene.shouldClear(true);   "        scene.setCamera("camera");   #        m_scene = std::move(scene);       }       "    void update(float dt) override       {           m_scene.update(dt);           m_scene.render();       }           private:   C    ocelot::core::Scene<sample::animation::AnimationScene> m_scene;   };        int main(int argc, char *argv[])   {   !    using namespace ocelot::core;       -    static constexpr int WINDOW_WIDTH  = 800;   -    static constexpr int WINDOW_HEIGHT = 600;       /    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS);       i    Window window = WindowBuilder().title("animation").width(WINDOW_WIDTH).height(WINDOW_HEIGHT).build();       T    OpenGLContext context = OpenGLContext::forWindow(window, OpenGLESVersion{2, 0});        context.makeCurrent(window);       H    Application app(ocelot::audio::AudioAPI::SDL2, window, "animation");       a    std::shared_ptr<ocelot::core::Layer> layer(new ::Layer(window, WINDOW_WIDTH, WINDOW_HEIGHT));       app.addLayer(layer);       app.setFpsLimit(60);       app.setReportInterval(1);       window.show();       app.run();           SDL_Quit();           return 0;   }5�5��