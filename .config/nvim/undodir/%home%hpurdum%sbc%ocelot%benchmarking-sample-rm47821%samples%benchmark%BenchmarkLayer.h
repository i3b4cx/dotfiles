Vim�UnDo� �	NQ�OB0,	/w"11l����ښ�ޏ   �                                  d,Y+    _�                     _   (    ����                                                                                                                                                                                                                                                                                                                                                             d+�    �   ^   `   �      ]    std::unique_ptr<ocelot::core::Scene<sample::animation::AnimationScene>> m_animationScene;5��    ^   (                  �                     5�_�                    _   (    ����                                                                                                                                                                                                                                                                                                                                                             d+    �   ^   `   �      _    std::unique_ptr<ocelot::core::Scene<::sample::animation::AnimationScene>> m_animationScene;5��    ^   (                  �                     5�_�                    x   (    ����                                                                                                                                                                                                                                                                                                                                                             d+�     �   w   y   �      N    std::unique_ptr<ocelot::core::Scene<sample::sprite::Scene>> m_spriteScene;5��    w   (                  �                     5�_�                    z   (    ����                                                                                                                                                                                                                                                                                                                                                             d+�    �   y   {   �      J    std::unique_ptr<ocelot::core::Scene<sample::text::Scene>> m_textScene;5��    y   (                  e                     5�_�                    z   (    ����                                                                                                                                                                                                                                                                                                                                                             d+�     �   y   {   �      L    std::unique_ptr<ocelot::core::Scene<::sample::text::Scene>> m_textScene;5��    y   (                  e                     5�_�                    z   (    ����                                                                                                                                                                                                                                                                                                                                                             d+�    �   y   {   �      K    std::unique_ptr<ocelot::core::Scene<:sample::text::Scene>> m_textScene;5��    y   (                  e                     5�_�                    x   (    ����                                                                                                                                                                                                                                                                                                                                                             d+`     �   w   y   �      P    std::unique_ptr<ocelot::core::Scene<::sample::sprite::Scene>> m_spriteScene;5��    w   (                  �                     5�_�                    x   (    ����                                                                                                                                                                                                                                                                                                                                                             d+`    �   w   y   �      O    std::unique_ptr<ocelot::core::Scene<:sample::sprite::Scene>> m_spriteScene;5��    w   (                  �                     5�_�                          ����                                                                                                                                                                                                                                                                                                                                                             d+S�     �         �      #include "cube/Scene.h"5��                         N                     �                          O                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d+S�     �         �      #include "cube/Rotate.cpp"5��                         i                     �                          j                     �                        ~                    �                        ~                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d+S�   	 �         �      #include "cube/Rotate.cpp"5��                        e                    �                        e                    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d+Ze     �               �   c// ================================================================================================   /**   @ *   @copyright  Ocelot - Copyright (c) 2023 Konami Gaming, Inc.    *   5 *   @file       samples/benchmark/BenchmarkLayer.cpp    *   @author     Henry Purdum    *   @date       03/16/2023   8 *   @brief      required definitions for BenchmarkLayer    **/   c// ================================================================================================   /*   d----------------------------------------------------------------------------------------------------   %Date        | Author    | Description   d----------------------------------------------------------------------------------------------------   003/16/2023    HJP         Initial implementation   d----------------------------------------------------------------------------------------------------   */   #ifndef __BENCHMARK_LAYER_H__   #define __BENCHMARK_LAYER_H__       #include <fstream>       $#include "ocelot/core/Application.h"   #include "animation/Scene.h"   #include "scenes/CubeScene.h"   #include "scenes/ManyCubes.h"   #include "scenes/ManyQuads.h"   #include "cube/Scene.h"   #include "cube/Rotate.h"   #include "cube/Cube.h"   #include "lighting/Scene.h"   #include "scenes/KnightScene.h"   #include "offscreen/Scene.h"   #include "particles/Scene.h"   -#include "scene-transition/TransitionLayer.h"   +#include "scene-transition/CustomShaders.h"   %#include "shaders/TransitionShader.h"   -#include "scene-transition/TransitionLayer.h"   #include "sign-panel/Scene.h"   #include "sprite/Scene.h"   #include "text/Scene.h"   "#include "text-decoration/Scene.h"   $#include "ocelot/util/StatOverlay.h"   "#include "triangle/SceneBuilder.h"       struct Args   {       int secondsPerScene{0};       int instances{10};       std::string texture{""};       double fps{60};   "    glm::ivec2 viewport{640, 240};        float transitionSpeed{1.0f};       float pauseDuration{1.0f};   !    unsigned int sceneIndex1{0};         unsigned int sceneIndex2{1};       int index{-1};   };       1class BenchmarkLayer : public ocelot::core::Layer   {       public:   [    BenchmarkLayer(ocelot::core::Window &window, Args args, ocelot::core::Application& app)   �        : m_loaded(false), m_window(window), m_timeOnSample(0.0), m_recentSecond(0), m_secondsPerScene(args.secondsPerScene), m_fpsBenchmarkingSum(0.0), m_tempBenchmarkingSum(0.0), m_args(args), m_app(app), isSingleSampleBenchmark(false), index(-1)       {   (        m_fileOut.open("benchmark.out");           if(m_args.index >= 0)   	        {   +            isSingleSampleBenchmark = true;   !            index = m_args.index;   B            m_timeOnSample += ((double)index * m_secondsPerScene);   1            m_recentSecond = (int)m_timeOnSample;   	        }       }           float getTemperature();           void update(float dt);           private:       bool m_loaded;   #    ocelot::core::Window& m_window;       float  m_timeOnSample;       int m_recentSecond;       int m_secondsPerScene;       float m_fpsBenchmarkingSum;        float m_tempBenchmarkingSum;       std::ofstream m_fileOut;   @    std::shared_ptr<ocelot::scenegraph::AssetRegistry> m_assets;       Args m_args;   %    ocelot::core::Application& m_app;   9    std::shared_ptr<ocelot::render::Renderer> m_renderer;   7    std::shared_ptr<scenegraph::RenderTarget> m_target;   !    bool isSingleSampleBenchmark;       int index;        // animation sample scene(s)   ]    std::unique_ptr<ocelot::core::Scene<sample::animation::AnimationScene>> m_animationScene;        // batchdemo sample scene(s)   X    std::unique_ptr<ocelot::core::Scene<scene::manycubes::Scene>> m_batchDemoCubesScene;   X    std::unique_ptr<ocelot::core::Scene<scene::manyquads::Scene>> m_batchDemoQuadsScene;       // cube sample scene(s)   J    std::unique_ptr<ocelot::core::Scene<sample::cube::Scene>> m_cubeScene;       // lighting sample scene(s)   R    std::unique_ptr<ocelot::core::Scene<sample::lighting::Scene>> m_lightingScene;   #    // model-viewer sample scene(s)   T    std::unique_ptr<ocelot::core::Scene<scene::cube::Scene>> m_modelViewerSceneZero;   U    std::unique_ptr<ocelot::core::Scene<scene::knight::Scene>> m_modelViewerSceneOne;   U    std::unique_ptr<ocelot::core::Scene<scene::knight::Scene>> m_modelViewerSceneTwo;   W    std::unique_ptr<ocelot::core::Scene<scene::knight::Scene>> m_modelViewerSceneThree;        // offscreen sample scene(s)   X    std::unique_ptr<ocelot::core::Scene<sample::offscreen::Scene>> m_offscreenSceneCube;   V    std::unique_ptr<ocelot::core::Scene<scene::knight::Scene>> m_offscreenSceneKnight;        // particles sample scene(s)   T    std::unique_ptr<ocelot::core::Scene<sample::particles::Scene>> m_particlesScene;   '    // scene-transition sample scene(s)   Z    std::unique_ptr<ocelot::core::Scene<scene::transition::Scene>> m_sceneTransitionScene;   2    std::shared_ptr<ocelot::core::Layer> m_layer1;   2    std::shared_ptr<ocelot::core::Layer> m_layer2;   !    // sign-panel sample scene(s)   T    std::unique_ptr<ocelot::core::Scene<sample::signPanel::Scene>> m_signPanelScene;       // sprite sample scene(s)   N    std::unique_ptr<ocelot::core::Scene<sample::sprite::Scene>> m_spriteScene;       // text sample scene(s)   J    std::unique_ptr<ocelot::core::Scene<sample::text::Scene>> m_textScene;   &    // text-decoration sample scene(s)   ^    std::unique_ptr<ocelot::core::Scene<sample::textDecoration::Scene>> m_textDecorationScene;   9    std::unique_ptr<ocelot::util::StatOverlay> m_overlay;       // triangle sample scene(s)   R    std::unique_ptr<ocelot::core::Scene<sample::triangle::Scene>> m_triangleScene;   };       #endif5�5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d,Y   
 �         �      #include "cube/Scene.h"5��                         N                     �                          O                     �                     	   ^             	       5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d,Y*    �                #include "cube/Rotate.h"5��                          O                     5�_�          	            
    ����                                                                                                                                                                                                                                                                                                                                                             d+M�    �         �      #include "samples/cube/Scene.h"5��       
                  A                     5�_�      
          	          ����                                                                                                                                                                                                                                                                                                                                                             d+<      �         �      #include "animation/Scene.h"   #include5��                         �                     �                          �                     �                        �                    �                        �                    5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             d+<	     �              5��                          �      	               5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             d+<     �         �      #include "cube/Scene.h"5��                         N                     �                         N                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d+<     �         �      #include "scenes/ManyQuads.h"   #inlcude5��                         6                     �                          7                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d+<     �              5��                          7      	               5��