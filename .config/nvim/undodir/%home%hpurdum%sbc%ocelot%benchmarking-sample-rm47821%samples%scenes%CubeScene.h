Vim�UnDo� �'4�7��2����\F�nE)��G��E_�ý   $                                   d+Zg     _�                              ����                                                                                                                                                                                                                                                                                                                                                             d+Zf     �               $   c// ================================================================================================   /**   @ *   @copyright  Ocelot - Copyright (c) 2022 Konami Gaming, Inc.    *   + *   @file       samples/scenes/CubeScene.h    *   @author     Shannon Curtin    *   @date       04/05/2022   8 *   @brief      Demo scene that renders a textured cube    **/   c// ================================================================================================   /*   e ----------------------------------------------------------------------------------------------------   & Date        | Author    | Description   e ----------------------------------------------------------------------------------------------------   1 04/05/22      SJC         Initial implementation   e ----------------------------------------------------------------------------------------------------   */   %#ifndef _SAMPLES_SCENES_CUBE_SCENE_H_   %#define _SAMPLES_SCENES_CUBE_SCENE_H_       #include <memory>   +#include "ocelot/scenegraph/RenderSystem.h"   $#include "ocelot/scenegraph/Scene.h"   #include "systems/Rotate.h"       namespace scene   {       namespace cube       {   0        using Scene = ocelot::scenegraph::Scene<   {            ocelot::scenegraph::SceneTypeList<ocelot::core::TypeList2<ocelot::scenegraph::RenderSystem, Rotations>>::type>;   G        void buildScene(Scene &scene, unsigned width, unsigned height);       }  // namespace cube   }  // namespace scene       '#endif  //_SAMPLES_SCENES_CUBE_SCENE_H_5�5��