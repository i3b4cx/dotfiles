VimUnDoå f	¹ś’yģi?¦!T¬/ GįŪ)Ecų   ¬           d      B       B   B   B    d=     _Š                        y    ’’’’                                                                                                                                                                                                                                                                                                                                                             d=y	     õ                 y             .transform(ocelot::scenegraph::Transform().translate({0.5f, 0.0f, 0.0f}).setScale({0.5f, 0.5f, 0.5f}))})}}};5õ       y                 Ļ                     õ                          Š                     5_Š                           ’’’’                                                                                                                                                                                                                                                                                                                                                             d=y     õ                  5õ                          Š                     5_Š                           ’’’’                                                                                                                                                                                                                                                                                                                                                             d=y    õ                  õ               5õ                   /      Ń              K      5_Š                            ’’’’                                                                                                                                                                                                                                                                                                                                                             d=y¶    õ         “      .#include "samples/triangle/SceneDescription.h"5õ                          y                     5_Š                           ’’’’                                                                                                                                                                                                                                                                                                                                                             d=zń     õ                #ifdef USE_GLES25õ                          0                     5_Š      	                     ’’’’                                                                                                                                                                                                                                                                                                                                                             d=zņ    õ                #endif5õ                          ē                     5_Š      
           	      #    ’’’’                                                                                                                                                                                                                                                                                                                                                             d={P     õ         ²      ##include "samples/triangle/Scene.h"5õ       #                  |                     5_Š   	              
           ’’’’                                                                                                                                                                                                                                                                                                                                                             d={R     õ      "   ³       õ         ³    5õ                         }              	      5_Š   
                        ’’’’                                                                                                                                                                                                                                                                                                                                                             d={U     õ                *#include "samples/triangle/SceneBuilder.h"5õ                          }      +               5_Š                           ’’’’                                                                                                                                                                                                                                                                                                                                                             d={[     õ                .#include "samples/triangle/SceneDescription.h"5õ                          ¤      /               5_Š                           ’’’’                                                                                                                                                                                                                                                                                                                                                             d={\     õ         ¾      .#include "samples/triangle/TriangleBehavior.h"5õ                         æ                     5_Š                           ’’’’                                                                                                                                                                                                                                                                                                                                                             d={]    õ         ¾      #include "samples/triangle/.h"5õ                         æ                     õ                     	   æ             	       5_Š                       '    ’’’’                                                                                                                                                                                                                                                                                                                               '          1       v   1    d=+    õ         ¾      6 *   @file       samples/triangle/SceneDescription.cpp5õ       '                  Ó                      5_Š                    ”   !    ’’’’                                                                                                                                                                                                                                                                                                                            ”   !       ”   2       v   2    d=o     õ       ¢   ¾      <            for (const auto &e : SceneDescription::entities)5õ        !                  ”                     5_Š                    ¤   !    ’’’’                                                                                                                                                                                                                                                                                                                            ¤   !       ¤   2       v   2    d=s     õ   £   „   ¾      <            for (const auto &t : SceneDescription::textures)5õ    £   !                                       5_Š                    §   !    ’’’’                                                                                                                                                                                                                                                                                                                            §   !       §   2       v   2    d=v     õ   ¦   Ø   ¾      =            for (const auto &m : SceneDescription::materials)5õ    ¦   !                                       5_Š                    Ŗ   !    ’’’’                                                                                                                                                                                                                                                                                                                            Ŗ   !       Ŗ   2       v   2    d=z     õ   ©   «   ¾      :            for (const auto &m : SceneDescription::meshes)5õ    ©   !                                       5_Š                    ­   !    ’’’’                                                                                                                                                                                                                                                                                                                            ­   !       ­   2       v   2    d=|     õ   ¬   ®   ¾      :            for (const auto &m : SceneDescription::models)5õ    ¬   !                                       5_Š                    °   !    ’’’’                                                                                                                                                                                                                                                                                                                            °   !       °   2       v   2    d=     õ   Æ   ±   ¾      ;            for (const auto &c : SceneDescription::cameras)5õ    Æ   !                                       5_Š                    ³       ’’’’                                                                                                                                                                                                                                                                                                                            ³          ³   ,       v   ,    d=    õ   ²   “   ¾      7            for (auto &b : SceneDescription::behaviors)5õ    ²                     g                     5_Š                    ¶   (    ’’’’                                                                                                                                                                                                                                                                                                                            ¶   (       ¶   /       v   /    d=    õ   µ   ·   ¾      v                ocelot::scenegraph::add<TriangleBehavior>(scene, b.name, entity->id(), glm::radians(b.rotationSpeed));5õ    µ   (                                       5_Š                    l       ’’’’                                                                                                                                                                                                                                                                                                                            l          l   )       v   )    d=¦     õ   k   m   ¾      5std::array<Behavior, 2> SceneDescription::behaviors{{5õ    k                                          5_Š                    ^   6    ’’’’                                                                                                                                                                                                                                                                                                                            ^   6       ^   G       v   G    d=«     õ   ]   _   ¾      Pstd::array<ocelot::scenegraph::description::Model, 2> SceneDescription::models{{5õ    ]   6                  ē                     5_Š                    V   5    ’’’’                                                                                                                                                                                                                                                                                                                            V   5       V   E       v   E    d=³     õ   U   W   ¾      Nstd::array<ocelot::scenegraph::description::Mesh, 2> SceneDescription::meshes{5õ    U   5                  Ē                     5_Š                    V   5    ’’’’                                                                                                                                                                                                                                                                                                                            V   5       V   E       v   E    d=“     õ   U   W   ¾      =std::array<ocelot::scenegraph::description::Mesh, 2> :meshes{5õ    U   5                  Ē                     5_Š                    )   >    ’’’’                                                                                                                                                                                                                                                                                                                            )   >       )   O       v   O    d=Ā     õ   (   *   ¾      [std::array<ocelot::scenegraph::description::BasicMaterial, 2> SceneDescription::materials{{5õ    (   >                  É                     5_Š                    !   8    ’’’’                                                                                                                                                                                                                                                                                                                            !   8       !   I       v   I    d=Å    õ       "   ¾      Sstd::array<ocelot::scenegraph::description::Texture, 1> SceneDescription::textures{5õ        8                  T                     5_Š                    m       ’’’’                                                                                                                                                                                                                                                                                                                            !   8       !   I       v   I    d=S     õ   l   o   ¾          {5õ    l                    N                     õ    m                     O                    õ    m                    _                    5_Š      "              n       ’’’’                                                                                                                                                                                                                                                                                                                            !   8       !   I       v   I    d=f     õ   m   n                  Behavior(5õ    m                      O                     5_Š      #           "   n       ’’’’                                                                                                                                                                                                                                                                                                                            !   8       !   I       v   I    d=§     õ   m   n                  "triangle_behavior_1",5õ    m                      O                     5_Š   "   $           #   r       ’’’’                                                                                                                                                                                                                                                                                                                            !   8       !   I       v   I    d=Ø   
 õ   q   r                  "triangle_behavior_2",5õ    q                                           5_Š   #   %           $   n       ’’’’                                                                                                                                                                                                                                                                                                                            !   8       !   I       v   I    d=ż     õ         ½    õ   m   p   ¼              "green_triangle",5õ    m                    h              	       õ    n                     i                    õ    n                 
   v             
       õ    n                    }                    õ    n                                         õ                                        (       õ    o   (                  ¹                     5_Š   $   &           %   o       ’’’’                                                                                                                                                                                                                                                                                                                            "   8       "   I       v   I    d=     õ   n   o                  "green_triangle",5õ    n                      w                     5_Š   %   '           &   o       ’’’’                                                                                                                                                                                                                                                                                                                            "   8       "   I       v   I    d=
     õ   n   p   ½      *            ocelot::scenegraph::ObjectID()5õ    n                                          5_Š   &   (           '   o   &    ’’’’                                                                                                                                                                                                                                                                                                                            "   8       "   I       v   I    d=    õ   n   p   ½      &        ocelot::scenegraph::ObjectID()5õ    n   &                                       5_Š   '   )           (   s       ’’’’                                                                                                                                                                                                                                                                                                                            s          s          v       d=     õ   r   t   ½              "brick_triangle",5õ    r                     Ć                     5_Š   (   *           )   s       ’’’’                                                                                                                                                                                                                                                                                                                            s          s          v       d=     õ   r   t   ½      	        ,5õ    r                     Ć                     õ    r                      »                     õ    r                     Ā                     õ    r                      »                     õ    r                     Ė                     õ    r                    Ė                    õ    r                    ×                    5_Š   )   +           *   s   $    ’’’’                                                                                                                                                                                                                                                                                                                            s          s          v       d=    õ   r   t   ½      %        ocelot::scenegraph::ObjectID,5õ    r   $                  ß                     5_Š   *   ,           +   x   C    ’’’’                                                                                                                                                                                                                                                                                                                            x   C       x   T       v   T    d=7    õ   w   y   ½      ^std::array<ocelot::scenegraph::description::OrthographicCamera, 1> SceneDescription::cameras{{5õ    w   C                  B                     5_Š   +   -           ,      7    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=>    õ         ½      Rstd::array<ocelot::scenegraph::description::Entity, 1> SceneDescription::entities{5õ       7                                       5_Š   ,   .           -      Z    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=Ņ     õ         ½      \            std::vector<ocelot::scenegraph::AssetRef<ocelot::scenegraph::Texture>> textures;5õ       Z                  M                     5_Š   -   /           .      Z    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=Ó     õ         ½      [            std::vector<ocelot::scenegraph::AssetRef<ocelot::scenegraph::Texture>> texture;5õ       Z                  M                     5_Š   .   0           /      V    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=Ö     õ         ½      W            std::vector<ocelot::scenegraph::AssetRef<ocelot::scenegraph::Mesh>> meshes;5õ       T                 §                    5_Š   /   1           0      ]    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=Ś     õ         ½      ^            std::vector<ocelot::scenegraph::AssetRef<ocelot::scenegraph::Material>> materials;5õ       \                 	                    õ       ]                 
                    5_Š   0   2           1   ¤       ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=ā     õ   £   „   ½      Z                textures.emplace_back(ocelot::scenegraph::assetFromDescription(t, scene));5õ    £                     ¾                     õ    £                    ½                    5_Š   1   3           2   §       ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=å     õ   ¦   Ø   ½      V                materials.emplace_back(ocelot::scenegraph::fromDescription(m, scene));5õ    ¦                    I                    5_Š   2   4           3   Ŗ       ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=é     õ   ©   «   ½      X                meshes.emplace_back(ocelot::scenegraph::assetFromDescription(m, scene));5õ    ©                     É                     5_Š   3   5           4   Ŗ       ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=ź     õ   ©   «   ½      W                meshs.emplace_back(ocelot::scenegraph::assetFromDescription(m, scene));5õ    ©                     É                     5_Š   4   6           5   Ŗ       ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=ė    õ   ©   «   ½      V                mesh.emplace_back(ocelot::scenegraph::assetFromDescription(m, scene));5õ    ©                     É                     õ    ©                    Ģ                    õ    ©                    Ė                    5_Š   5   7           6   “   d    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=+     õ   ³   µ   ½      p                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entity, b.entity);5õ    ³   d                  |                     5_Š   6   8           7   “   p    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=2    õ   ³   µ   ½      r                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entityId, b.entity);5õ    ³   p                                       5_Š   7   9           8   “   f    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=L     õ   ³   µ   ½      t                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entityId, b.entityId);5õ    ³   f                  ~                     5_Š   8   :           9   “   t    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=P    õ   ³   µ   ½      v                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entityId(), b.entityId);5õ    ³   t                                       5_Š   9   ;           :   “   h    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=     õ   ³   µ   ½      x                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entityId(), b.entityId());5õ    ³   h                                       5_Š   :   <           ;   “   h    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=     õ   ³   µ   ½      v                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entityId()b.entityId());5õ    ³   h                                       5_Š   ;   =           <   “   h    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=     õ   ³   µ   ½      u                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entityId().entityId());5õ    ³   h                                       5_Š   <   >           =   “   h    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=     õ   ³   µ   ½      t                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entityId()entityId());5õ    ³   h                                       5_Š   =   ?           >   “   h    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=     õ   ³   µ   ½      l                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entityId()());5õ    ³   h                                       5_Š   >   @           ?   “   h    ’’’’                                                                                                                                                                                                                                                                                                                               7          H       v   H    d=    õ   ³   µ   ½      h                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entityId()5õ    ³   h                                       õ    ³   i                                     5_Š   ?   A           @   ±        ’’’’                                                                                                                                                                                                                                                                                                                            ¶          ±           v       d=ņ    õ   °   ²   ½          %            for (auto &b : behaviors)               {   j                auto *entity = ocelot::scenegraph::getOrInsert<ocelot::core::Entity>(scene, b.entityId());   n                ocelot::scenegraph::add<Behavior>(scene, b.name, entity->id(), glm::radians(b.rotationSpeed));               }5õ    °                     ć                    5_Š   @   B           A          ’’’’                                                                                                                                                                                                                                                                                                                            ±          ±           v       d=ś     õ                '#include "samples/triangle/Behaviors.h"5õ                          Į      (               5_Š   A               B   k        ’’’’                                                                                                                                                                                                                                                                                                                            k           u          v       d=’    õ   j   l   ·          #std::array<Behavior, 2> behaviors{{       {   '        ocelot::scenegraph::ObjectID(),           20.0f,       },       {   '        ocelot::scenegraph::ObjectID(),           -20.0f,       },   }};    5õ    j                      $      ²               5_Š      !       "       o       ’’’’                                                                                                                                                                                                                                                                                                                            !   8       !   I       v   I    d=     õ   n   p        5õ    n                      n                     5_Š                   !   s       ’’’’                                                                                                                                                                                                                                                                                                                            !   8       !   I       v   I    d=   	 õ   r   t        5õ    r                      ©                     5_Š                            ’’’’                                                                                                                                                                                                                                                                                                                                                             d=y     õ                     õ              õ                #include <memory>   #include "TriangleBehavior.h"   #include "ocelot/core/Scene.h"       namespace sample   {       namespace triangle       {   0        using Scene = ocelot::scenegraph::Scene<               ocelot::scenegraph::SceneTypeList<ocelot::core::TypeList2<ocelot::scenegraph::RenderSystem, TriangleBehaviors>>::type>;       0        ocelot::core::Scene<Scene> buildScene();       }  // namespace triangle   }  // namespace sample5õ                          Ń                     õ                         Ņ                    5_Š                            ’’’’                                                                                                                                                                                                                                                                                                                                                             d=y
     õ                     õ              õ                #include <memory>   #include "TriangleBehavior.h"   #include "ocelot/core/Scene.h"       namespace sample   {       namespace triangle       {   0        using Scene = ocelot::scenegraph::Scene<               ocelot::scenegraph::SceneTypeList<ocelot::core::TypeList2<ocelot::scenegraph::RenderSystem, TriangleBehaviors>>::type>;       0        ocelot::core::Scene<Scene> buildScene();       }  // namespace triangle   }  // namespace sample5õ                          Š                     õ                         Ń                    5ēŖ