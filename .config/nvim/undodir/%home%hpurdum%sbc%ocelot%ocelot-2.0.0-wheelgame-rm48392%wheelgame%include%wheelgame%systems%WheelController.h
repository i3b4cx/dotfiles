Vim�UnDo� ��
�q���(Uv�I�1���tl�9TyM   Q   H         * @param ips Reference to the IntroProgressSystem for pass-thru   E   '      0       0   0   0    dv.J    _�                    0   �    ����                                                                                                                                                                                                                                                                                                                            4           >          v       d]d~    �         @    �   /   1   @      �        void update(wheelgame::systems::WheelControllerSystem &wcs, ocelot::scenegraph::SceneRegistry &reg, ocelot::animation::AnimationSystem &anim, float &dt);5��    /   �                  �                     �    /   �                 �                    �                          �              +       �    0   �               	   !              	       �    0   �                 (                    5�_�                    <   1    ����                                                                                                                                                                                                                                                                                                                            5           ?          v       d]d�    �   ;   =   A      >            wheelgame::systems::update(wcs, scene, scene, dt);5��    ;   1                  X	                     5�_�                        
    ����                                                                                                                                                                                                                                                                                                                                
                  v       dq�     �      !   A      9#include "wheelgame/include/wheelgame/core/CubicBezier.h"5��       
                  �                     5�_�                    !   
    ����                                                                                                                                                                                                                                                                                                                            !   
       !          v       dq�    �       "   A      @#include "wheelgame/include/wheelgame/systems/FlipperBehavior.h"5��        
                  �                     5�_�                       +    ����                                                                                                                                                                                                                                                                                                                                                             dv-W     �         A      @ *   @copyright  Ocelot - Copyright (c) 2021 Konami Gaming, Inc.5��       +                  �                      5�_�                       +    ����                                                                                                                                                                                                                                                                                                                                                             dv-X     �         A      ? *   @copyright  Ocelot - Copyright (c) 202 Konami Gaming, Inc.5��       +                  �                      5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             dv-\     �         A      , *   @file       WheelGame/WheelController.h5��                         �                      5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             dv-^     �         A       *   @file       5��                      #   �               #       5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             dv-i     �         A       *   @author     Shannon Curtin5��                         �                      5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             dv-j     �         A       *   @author     5��                         �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-m     �         A       *   @date       08/31/20215��                                              5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-n     �         A       *   @date       08/31/2025��                                              5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-p     �         A       *   @date       08/31/20235��                                              5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-p     �         A       *   @date       08/3/20235��                                              �                                            5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-s     �         A       *   @date       08/30/20235��                                            5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-u     �      	   A      1 *   @brief      Behavior component for the wheel5��                          ,                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-v     �      	   A       *   @brief      5��                         ,                     �       .                 I                    �       .              
   I             
       5�_�                    	   1    ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �      
   A      1 *   @remarks    Behavior component for the wheel5��                          e                      �       )                 }                    5�_�                       7    ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �                910/07/2021    SJC         Integrate with Animation System5��                                :               5�_�                       7    ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �                M11/24/2021    SJC         Increased the total rotation of the spin animation.5��                                N               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �         ?      008/31/2021    SJC         Initial implementation5��                         �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �         ?      /08/31/2021    JC         Initial implementation5��                         �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �         ?      .08/31/2021    C         Initial implementation5��                         �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �         ?      -08/31/2021             Initial implementation5��                         �                     5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �         ?      008/31/2021    HJP         Initial implementation5��       	                  �                     5�_�                      	    ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �         ?      /08/31/202    HJP         Initial implementation5��       	                  �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �         ?      008/31/2023    HJP         Initial implementation5��                         �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �         ?      /08/3/2023    HJP         Initial implementation5��                         �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �         ?      008/30/2023    HJP         Initial implementation5��                        �                    5�_�      !               +       ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   *   -   ?          {5��    *                    �                     �    +                     �                    5�_�       "           !   ,       ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   +   .   @              /**5��    +                    �                     �    ,   	                 �                    5�_�   !   #           "   ,       ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   +   .   A              /**5��    +                    �                     �    ,                     �                     �    ,                    �                    5�_�   "   $           #   -   (    ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   ,   /   B      (         * @struct WheelControllerSystem5��    ,   (                 �                     �    -                  %   �              %       5�_�   #   %           $   2        ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   2   9   D              �   3   4   D    �   1   4   C       5��    1                      E                     �    2                      F                     �    2                    N                    5�_�   $   &           %   @       ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   @   G   J              �   A   B   J    �   ?   B   I          {5��    ?                    �	                     �    @                     �	                    �    @                    �	              4      5�_�   %   '           &   5       ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   4   6   O      >         * @param ips Placeholder template IntroProgressSystem5��    4                     �                     5�_�   &   (           '   5       ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   4   6   O      @         * @param xxips Placeholder template IntroProgressSystem5��    4                    �                    5�_�   '   )           (   5   +    ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   4   6   O      >         * @param wcs Placeholder template IntroProgressSystem5��    4   +                  �                     5�_�   (   *           )   5   +    ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   4   6   O      +         * @param wcs Placeholder template 5��    4   +                  �                     �    4   +                 �                    5�_�   )   +           *   6   -    ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �   5   8   O      -         * @param reg SceneRegistry reference5��    5   -                 $                     �    6                  @   0              @       �    6   J                 o                    �    6   T              	   y             	       �    6   Z                                     �    6   p                 �                    �    6   a                 �                    5�_�   *   -           +   7   v    ����                                                                                                                                                                                                                                                                                                                                                             dv.     �   6   9   P      v         * @param anim Reference to the animation system needed to control animations within the WheelControllerSystem5��    6   v                 �                     �    7                  [   �              [       5�_�   +   .   ,       -   8   f    ����                                                                                                                                                                                                                                                                                                                                                             dv.+     �   7   9   Q      f         * @param input Reference to the input system needed to control input handling within the Whee5��    7   f                  	                     �    7   b                 �                    5�_�   -   /           .   E   '    ����                                                                                                                                                                                                                                                                                                                                                             dv.C     �   D   F   Q      H         * @param ips Reference to the IntroProgressSystem for pass-thru5��    D   '                  2                     5�_�   .   0           /   E   '    ����                                                                                                                                                                                                                                                                                                                                                             dv.E     �   D   F   Q      4         * @param ips Reference to the for pass-thru5��    D   '                  2                     �    D   '                 2                    5�_�   /               0   E       ����                                                                                                                                                                                                                                                                                                                                                             dv.I    �   D   F   Q      J         * @param ips Reference to the WheelControllerSystem for pass-thru5��    D                                        5�_�   +           -   ,   8   e    ����                                                                                                                                                                                                                                                                                                                                                             dv.)     �   7   9   Q      e         * @param input Reference to the input system needed to control input handling within the Whe            * e5��    7   e                 	                     5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                             dv-�     �         ?      .08/31/202   HJP         Initial implementation5��       	                  �                     5�_�                     0   �    ����                                                                                                                                                                                                                                                                                                                            4           >          v       d]dv     �   /   1   @      �        void update(wheelgame::systems::WheelControllerSystem &wcs, ocelot::scenegraph::SceneRegistry &reg, ocelot::animation::AnimationSystem &anim, Input float &dt);5��    /   �                  �                     �    /   �                 �                    �    /   �                 �                    5��