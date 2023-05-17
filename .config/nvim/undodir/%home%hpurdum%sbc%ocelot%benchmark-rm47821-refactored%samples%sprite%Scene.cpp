Vim�UnDo� ��h.�����
������8m�[��y1   �   ##include "sprite/TextureSwitcher.h"      
                       d9��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             d9�"     �               �   c// ================================================================================================   /**   @ *   @copyright  Ocelot - Copyright (c) 2022 Konami Gaming, Inc.    *   ) *   @file       samples/sprite/Scene.cpp    *   @author     Shannon Curtin    *   @date       08/16/2022   F *   @brief      Scene that serves as an example for rendering sprites    **/   c// ================================================================================================   /*   e ----------------------------------------------------------------------------------------------------   & Date        | Author    | Description   e ----------------------------------------------------------------------------------------------------   1 08/16/22      SJC         Initial implementation   e ----------------------------------------------------------------------------------------------------   */   #include "Scene.h"   #include <iostream>   #include <memory>   !#include "sprite/ColorSwitcher.h"   #include "sprite/Rotator.h"   ##include "sprite/TextureSwitcher.h"   #include "ocelot/core/Window.h"   &#include "ocelot/render/GraphicsAPI.h"   *#include "ocelot/render/RendererFactory.h"   ##include "ocelot/scenegraph/Init.h"   $#include "ocelot/scenegraph/Model.h"   &#include "ocelot/scenegraph/Texture.h"   8#include "ocelot/scenegraph/description/BasicMaterial.h"   1#include "ocelot/scenegraph/description/Entity.h"   /#include "ocelot/scenegraph/description/Mesh.h"   0#include "ocelot/scenegraph/description/Model.h"   =#include "ocelot/scenegraph/description/OrthographicCamera.h"   /#include "ocelot/scenegraph/description/Quad.h"   1#include "ocelot/scenegraph/description/Sprite.h"   2#include "ocelot/scenegraph/description/Texture.h"       0using RGBAColor = ocelot::scenegraph::RGBAColor;       namespace sample   {       namespace sprite       {   H        ocelot::core::Scene<Scene> buildScene(ocelot::core::Window &win)   	        {   |            auto renderer = ocelot::render::buildSharedRendererEasy(ocelot::render::GLES2, ocelot::render::POLICY_PRIORITY);   0            renderer->enableDepthTesting(false);   A            auto target        = renderer->defaultRenderTarget();   G            target->clearColor = RGBAColor{50, 70, 200, 255}.toFloat();   b            ocelot::core::Scene<Scene> ret = ocelot::core::Scene<Scene>("root", renderer, target);   1            auto &scene        = ret.sceneData();       \            std::vector<ocelot::scenegraph::AssetRef<ocelot::scenegraph::Texture>> textures;       !            glm::ivec2 winSize{};   4            win.getDimensions(winSize.x, winSize.y);       L            auto cam = ocelot::scenegraph::description::OrthographicCamera()   '                           .name("cam")   )                           .entity("cam")   &                           .left(0.0f)   ,                           .right(winSize.x)   %                           .top(0.0f)   -                           .bottom(winSize.y)   '                           .near(-1.0f)   %                           .far(1.0f)   y                           .viewport({0, 0, static_cast<unsigned int>(winSize.x), static_cast<unsigned int>(winSize.y)});   <            ocelot::scenegraph::fromDescription(cam, scene);       r            auto tex1 = ocelot::scenegraph::description::Texture().name("tex1").path("assets/button_cash_up.png");   Y            textures.emplace_back(ocelot::scenegraph::assetFromDescription(tex1, scene));       v            auto tex2 = ocelot::scenegraph::description::Texture().name("tex2").path("assets/button_services_up.png");   Y            textures.emplace_back(ocelot::scenegraph::assetFromDescription(tex2, scene));       t            auto tex3 = ocelot::scenegraph::description::Texture().name("tex3").path("assets/button_camera_up.png");   Y            textures.emplace_back(ocelot::scenegraph::assetFromDescription(tex3, scene));       l            auto bg1 = ocelot::scenegraph::description::Texture().name("bg1").path("assets/background.png");   X            textures.emplace_back(ocelot::scenegraph::assetFromDescription(bg1, scene));       @            auto sp3 = ocelot::scenegraph::description::Sprite()   +                           .name("sprite3")   0                           .entity("background")   ?                           .pivot(ocelot::scenegraph::TOP_LEFT)   @                           .upSign(ocelot::scenegraph::NEGATIVE)   +                           .texture("bg1");   <            ocelot::scenegraph::fromDescription(sp3, scene);       @            auto sp1 = ocelot::scenegraph::description::Sprite()   +                           .name("sprite1")   -                           .entity("sprite1")   ?                           .pivot(ocelot::scenegraph::TOP_LEFT)   @                           .upSign(ocelot::scenegraph::NEGATIVE)   ,                           .texture("tex1");   <            ocelot::scenegraph::fromDescription(sp1, scene);       @            auto sp2 = ocelot::scenegraph::description::Sprite()   +                           .name("sprite2")   -                           .entity("sprite2")   ?                           .pivot(ocelot::scenegraph::TOP_LEFT)   @                           .upSign(ocelot::scenegraph::NEGATIVE)   ,                           .texture("tex2");   <            ocelot::scenegraph::fromDescription(sp2, scene);       5            auto ts1 = description::TextureSwitcher()   '                           .name("ts1")   -                           .entity("sprite2")   -                           .sprite("sprite2")   .                           .addTexture("tex2")   .                           .addTexture("tex3")   .                           .addTexture("bg1");   (            fromDescription(ts1, scene);       q            auto rt1 = description::sample::sprite::Rotator().name("rt1").entity("sprite2").degreesPerSecond(50);   (            fromDescription(rt1, scene);       =            auto q1 = ocelot::scenegraph::description::Quad()   %                          .name("q1")   '                          .entity("q1")   ?                          .upSign(ocelot::scenegraph::NEGATIVE)   ?                          .pivot(ocelot::scenegraph::TOP_LEFT);   ;            ocelot::scenegraph::fromDescription(q1, scene);       =            auto q2 = ocelot::scenegraph::description::Quad()   %                          .name("q2")   '                          .entity("q2")   ?                          .upSign(ocelot::scenegraph::NEGATIVE)   ?                          .pivot(ocelot::scenegraph::TOP_LEFT);   ;            ocelot::scenegraph::fromDescription(q2, scene);       3            auto cs1 = description::ColorSwitcher()   '                           .name("cw1")   -                           .entity("sprite1")   -                           .sprite("sprite1")   &                           .quad("q1")   7                           .addColor({80, 80, 80, 255})   ;                           .addColor({255, 255, 255, 255});   (            fromDescription(cs1, scene);       3            auto cs2 = description::ColorSwitcher()   '                           .name("cs2")   (                           .entity("q2")   &                           .quad("q2")   -                           .sprite("sprite2")   8                           .addColor({255, 0, 255, 255})   8                           .addColor({255, 255, 0, 255})   9                           .addColor({0, 255, 255, 255});   (            fromDescription(cs2, scene);       \            auto entites = ocelot::scenegraph::description::Entity().name("root").children({   H                {ocelot::scenegraph::description::Entity().name("cam")},   U                {ocelot::scenegraph::description::Entity().name("sprite1").transform(   x                    ocelot::scenegraph::Transform().setPosition({367.0f, 50.0f, 0.0f}).setScale({50.0f, 50.0f, 1.0f}))},   U                {ocelot::scenegraph::description::Entity().name("sprite2").transform(   x                    ocelot::scenegraph::Transform().setPosition({444.0f, 50.0f, 0.0f}).setScale({50.0f, 50.0f, 0.0f}))},   :                {ocelot::scenegraph::description::Entity()   (                     .name("background")   g                     .transform(ocelot::scenegraph::Transform().setScale({winSize.x, winSize.y, 1.0f}))                       },   P                {ocelot::scenegraph::description::Entity().name("q1").transform(   j                    ocelot::scenegraph::Transform().setScale({100, 100, 1.0f}).setPosition({50, 50, 1}))},   P                {ocelot::scenegraph::description::Entity().name("q2").transform(   h                    ocelot::scenegraph::Transform().setScale({80, 80, 1.0f}).setPosition({50, 50, 1}))},               });   @            ocelot::scenegraph::fromDescription(entites, scene);       I            auto setPriority = [&scene](const char *name, int priority) {   ]                auto *mod = ocelot::scenegraph::find<ocelot::scenegraph::Model>(scene, name);                   if (mod)   /                    mod->setPriority(priority);               };       &            setPriority("sprite3", 0);   &            setPriority("sprite1", 1);   &            setPriority("sprite2", 1);   !            setPriority("q1", 1);   !            setPriority("q2", 2);       !            ret.setCamera("cam");   "            ret.shouldClear(true);               return ret;   	        }       }  // namespace sprite   }  // namespace sample5�5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             d9�%     �         �      !#include "sprite/ColorSwitcher.h"5��       
                  �                     5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             d9�%    �         �      #include "/ColorSwitcher.h"5��       
                  �                     5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             d9�+    �         �      "#include "systems/ColorSwitcher.h"5��       
                  �                     �       
                  �                     5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             d9��     �         �      #include "sprite/Rotator.h"5��       
                  �                     5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             d9��    �         �      #include "/Rotator.h"5��       
                  �                     �                        �                    5�_�                    t   $    ����                                                                                                                                                                                                                                                                                                                                                             d9�T     �   s   u   �      q            auto rt1 = description::sample::sprite::Rotator().name("rt1").entity("sprite2").degreesPerSecond(50);5��    s   $                  Y                     5�_�      	              t   $    ����                                                                                                                                                                                                                                                                                                                                                             d9�U     �   s   u   �      k            auto rt1 = description::::sprite::Rotator().name("rt1").entity("sprite2").degreesPerSecond(50);5��    s   $                  Y                     5�_�      
           	   t   $    ����                                                                                                                                                                                                                                                                                                                                                             d9�U     �   s   u   �      i            auto rt1 = description::sprite::Rotator().name("rt1").entity("sprite2").degreesPerSecond(50);5��    s   $                  Y                     5�_�   	              
   t   $    ����                                                                                                                                                                                                                                                                                                                                                             d9�V    �   s   u   �      c            auto rt1 = description::::Rotator().name("rt1").entity("sprite2").degreesPerSecond(50);5��    s   $                  Y                     5�_�   
                    
    ����                                                                                                                                                                                                                                                                                                                                                             d9��     �         �      ##include "sprite/TextureSwitcher.h"5��       
                  �                     5�_�                        
    ����                                                                                                                                                                                                                                                                                                                                                             d9��    �         �      #include "/TextureSwitcher.h"5��       
                  �                     5��