Vim�UnDo� $���?���uj�	a"�]�Rp��Rz��%9   0                                   d+Zb     _�                              ����                                                                                                                                                                                                                                                                                                                                                             d+Za     �               0   c// ================================================================================================   /**   @ *   @copyright  Ocelot - Copyright (c) 2022 Konami Gaming, Inc.    *   + *   @file       samples/text/Behaviors.cpp    *   @author     Shannon Curtin    *   @date       08/17/2022   + *   @brief      Behavior management system    **/   c// ================================================================================================   /*   d----------------------------------------------------------------------------------------------------   %Date        | Author    | Description   d----------------------------------------------------------------------------------------------------   008/17/2022    SJC         Initial implementation   d----------------------------------------------------------------------------------------------------   */   #include "Behaviors.h"   #include "Rotator.h"   #include "Switcher.h"   #include "TextAnimator.h"   ,#include "ocelot/scenegraph/SceneRegistry.h"       namespace ocelot   {       namespace scenegraph       {           template <typename T>   K        void updatePool(SceneRegistry &scene, float dt, T *dummy = nullptr)   	        {   +            auto *pool = getPool<T>(scene);               if (!pool)                   return;       !            for (auto &o : *pool)               {   %                update(o, scene, dt);               }   	        }       @        void update(Behaviors &, SceneRegistry &scene, float dt)   	        {   9            updatePool<sample::text::Rotator>(scene, dt);   ,            updatePool<Switcher>(scene, dt);   0            updatePool<TextAnimator>(scene, dt);   	        }       }  // namespace scenegraph   }  // namespace ocelot5�5��