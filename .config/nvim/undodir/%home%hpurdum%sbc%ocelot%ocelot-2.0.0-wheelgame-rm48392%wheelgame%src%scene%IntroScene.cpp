Vim�UnDo� �����hHJr)��^J�|�sn��D�a�i   v   6                        -1.0f,  1.0f, 0.0f, 0.0f, 1.0f   >         '       '   '   '    dc��    _�                    D   F    ����                                                                                                                                                                                                                                                                                                                            d          d   A       v   A    dc��     �   C   E   t      F                ocelot::scenegraph::description::Entity().name("text")5��    C   F               
   �              
       �    C   G       	       %   �      	       %       5�_�                    D   Q    ����                                                                                                                                                                                                                                                                                                                            D   Q       D   j       v   j    dc��     �   D   F   u      z                ocelot::scenegraph::description::Entity().name("text").transform(ocelot::scenegraph::Transform().setScale)�         t    �   C   E   t      l                ocelot::scenegraph::description::Entity().name("text").transform(const Transform &transform)5��    C   Q                 �                    �    C   R                 �                    �    C   Q                 �                    �                          �              )       �    D   n                  +                     �    D   n              	   +             	       �    D   q                  .                     5�_�                    E   z    ����                                                                                                                                                                                                                                                                                                                            E   z       E   �       v   �    dc��     �         u    �   D   F   u      �                ocelot::scenegraph::description::Entity().name("text").transform(ocelot::scenegraph::Transform().setScale(const glm::vec3 &scale))5��    D   z                 7                    �    D   z              	   7             	       �                          �              %       �    E   �                  e                     5�_�                    F   �    ����                                                                                                                                                                                                                                                                                                                            F   z       F   �       v   �    dc��    �   E   G   v      �                ocelot::scenegraph::description::Entity().name("text").transform(ocelot::scenegraph::Transform().setScale(glm::vec3()))5��    E   �                  f                     5�_�                   F   P    ����                                                                                                                                                                                                                                                                                                                            F          F   �       v   �    dc�L     �   E   F          �                ocelot::scenegraph::description::Entity().name("text").transform(ocelot::scenegraph::Transform().setScale(glm::vec3(1.5f)))5��    E                      �      �               5�_�                    E   Q    ����                                                                                                                                                                                                                                                                                                                            F          F   �       v   �    dc�N   
 �   D   F   u      Q                ocelot::scenegraph::description::Entity().name("intro_progress"),5��    D   P                  �                     5�_�                   .        ����                                                                                                                                                                                                                                                                                                                            F          .           v        dcں     �   -   /   u      S        static std::array<ocelot::scenegraph::description::Texture, 1> textures = {   �            {ocelot::scenegraph::description::Texture().name("text").type(ocelot::scenegraph::texture::Tex2D).width(640).height(240)}   
        };       N        static std::array<ocelot::scenegraph::description::Mesh, 1> meshes = {   4            {ocelot::scenegraph::description::Mesh()   $                 .name("intro_mesh")                    .vertices({   3                    -1.0f, -1.0f, 0.0f, 0.0f, 0.0f,   3                     1.0f, -1.0f, 0.0f, 1.0f, 0.0f,   3                     1.0f,  1.0f, 0.0f, 1.0f, 1.0f,   2                    -1.0f,  1.0f, 0.0f, 0.0f, 1.0f                       })   (                 .indices({0,1,2,0,2,3})   �                 .layout({{ocelot::scenegraph::VertexAttribute::Position, 3}, {ocelot::scenegraph::VertexAttribute::TexCoord, 2}})}};       O        static std::array<ocelot::scenegraph::description::Model, 1> models = {   �            {ocelot::scenegraph::description::Model().name("intro_model").entity("intro_model").mesh("intro_mesh").material("intro_material")}};       O        static std::array<ocelot::scenegraph::description::Entity, 1> entities{   M            {ocelot::scenegraph::description::Entity().name("root").children(   �                {ocelot::scenegraph::description::Entity().name("camera").transform(ocelot::scenegraph::Transform().setPosition({0, 0, 1})),   �                ocelot::scenegraph::description::Entity().name("intro_model").transform(ocelot::scenegraph::Transform().setPosition({0,0,0})),   P                ocelot::scenegraph::description::Entity().name("intro_progress")                    })}};5��    -                     �      E              5�_�                    1   	    ����                                                                                                                                                                                                                                                                                                                            .          .           v        dcڼ     �   0   3   ]      	        {5��    0   	                               	       �    1                                         �    1                                          �    1                                           5�_�                    2        ����                                                                                                                                                                                                                                                                                                                            .          .           v        dcھ     �   1   K   ^       �   2   3   ^    5��    1                                   E      5�_�                    2       ����                                                                                                                                                                                                                                                                                                                            2          J          v   &    dc��     �   1   K   v      S        static std::array<ocelot::scenegraph::description::Texture, 1> textures = {   �            {ocelot::scenegraph::description::Texture().name("text").type(ocelot::scenegraph::texture::Tex2D).width(640).height(240)}   
        };       N        static std::array<ocelot::scenegraph::description::Mesh, 1> meshes = {   4            {ocelot::scenegraph::description::Mesh()   $                 .name("intro_mesh")                    .vertices({   3                    -1.0f, -1.0f, 0.0f, 0.0f, 0.0f,   3                     1.0f, -1.0f, 0.0f, 1.0f, 0.0f,   3                     1.0f,  1.0f, 0.0f, 1.0f, 1.0f,   2                    -1.0f,  1.0f, 0.0f, 0.0f, 1.0f                       })   (                 .indices({0,1,2,0,2,3})   �                 .layout({{ocelot::scenegraph::VertexAttribute::Position, 3}, {ocelot::scenegraph::VertexAttribute::TexCoord, 2}})}};       O        static std::array<ocelot::scenegraph::description::Model, 1> models = {   �            {ocelot::scenegraph::description::Model().name("intro_model").entity("intro_model").mesh("intro_mesh").material("intro_material")}};       O        static std::array<ocelot::scenegraph::description::Entity, 1> entities{   M            {ocelot::scenegraph::description::Entity().name("root").children(   �                {ocelot::scenegraph::description::Entity().name("camera").transform(ocelot::scenegraph::Transform().setPosition({0, 0, 1})),   �                ocelot::scenegraph::description::Entity().name("intro_model").transform(ocelot::scenegraph::Transform().setPosition({0,0,0})),   P                ocelot::scenegraph::description::Entity().name("intro_progress")                    })}};5��    1                                         �    2                     ]                    �    3                     �                    �    5                     �                    �    6                     J	                    �    7                     �	                    �    8                     �	                    �    9                     �	                    �    :                     
                    �    ;                     =
                    �    <                     u
                    �    =                     �
                    �    >                     �
                    �    ?                     �
                    �    A                                         �    B                     �                    �    D                     i                    �    E                     �                    �    F                                         �    G                     �                    �    H                     3                    �    I                     �                    5�_�                    f   %    ����                                                                                                                                                                                                                                                                                                                            2          J          v   &    dc��     �   e   f          B            auto aspectRatio = static_cast<float>(width) / height;5��    e                      �      C               5�_�                    1   	    ����                                                                                                                                                                                                                                                                                                                            2          J          v   &    dc��     �   0   3   u      	        {5��    0   	                               	       �    1                                         �    1                                          �    1                                           5�_�                    2        ����                                                                                                                                                                                                                                                                                                                            3          K          v   &    dc��     �   2   4   v    �   2   3   v    5��    2                                    C       5�_�                    2        ����                                                                                                                                                                                                                                                                                                                            4          L          v   &    dc��    �   1   2           5��    1                                           5�_�                    ;       ����                                                                                                                                                                                                                                                                                                                            ;          ;          v       dc��     �   :   <   v      7                        -1.0f, -1.0f, 0.0f, 0.0f, 0.0f,5��    :                     )
                     5�_�                     ;       ����                                                                                                                                                                                                                                                                                                                            ;          ;          v       dc��     �   :   <   v      4                        -f, -1.0f, 0.0f, 0.0f, 0.0f,5��    :                     )
                     �    :                    )
                    5�_�      !               <       ����                                                                                                                                                                                                                                                                                                                            ;          ;          v       dc��     �   ;   =   v      7                         1.0f, -1.0f, 0.0f, 1.0f, 0.0f,5��    ;                     i
                     5�_�       "           !   <       ����                                                                                                                                                                                                                                                                                                                            ;          ;          v       dc��     �   ;   =   v      6                         .0f, -1.0f, 0.0f, 1.0f, 0.0f,5��    ;                     i
                     5�_�   !   #           "   <       ����                                                                                                                                                                                                                                                                                                                            ;          ;          v       dc��     �   ;   =   v      5                         0f, -1.0f, 0.0f, 1.0f, 0.0f,5��    ;                     i
                     5�_�   "   $           #   <       ����                                                                                                                                                                                                                                                                                                                            ;          ;          v       dc��     �   ;   =   v      4                         f, -1.0f, 0.0f, 1.0f, 0.0f,5��    ;                     i
                     �    ;                    i
                    5�_�   #   %           $   <   %    ����                                                                                                                                                                                                                                                                                                                            ;          ;          v       dc��     �   ;   =   v      ?                         aspectRatiof, -1.0f, 0.0f, 1.0f, 0.0f,5��    ;   $                  t
                     5�_�   $   &           %   ;   %    ����                                                                                                                                                                                                                                                                                                                            ;          ;          v       dc��     �   :   <   v      ?                        -aspectRatiof, -1.0f, 0.0f, 0.0f, 0.0f,5��    :   $                  4
                     5�_�   %   '           &   =       ����                                                                                                                                                                                                                                                                                                                            ;          ;          v       dc��     �   <   >   v      7                         1.0f,  1.0f, 0.0f, 1.0f, 1.0f,5��    <                    �
                    �    <                    �
                    5�_�   &               '   >       ����                                                                                                                                                                                                                                                                                                                            ;          ;          v       dc��    �   =   ?   v      6                        -1.0f,  1.0f, 0.0f, 0.0f, 1.0f5��    =                    �
                    �    =                    �
                    5�_�                   D   �    ����                                                                                                                                                                                                                                                                                                                            F          F   �       v   �    dcӔ     �   C   E   u      �                ocelot::scenegraph::description::Entity().name("intro_model").transform(ocelot::scenegraph::Transform().setPosition({0,0,})),5��    C   �                  �                     5�_�                     D   �    ����                                                                                                                                                                                                                                                                                                                            F          F   �       v   �    dcӖ   	 �   C   E   u      �                ocelot::scenegraph::description::Entity().name("intro_model").transform(ocelot::scenegraph::Transform().setPosition({0,0,0.5})),5��    C   �                  �                     5�_�                   F       ����                                                                                                                                                                                                                                                                                                                            F          F   �       v   �    dc�8     �   E   G   v                      )5��    E          z           �      z               5�_�                     E   P    ����                                                                                                                                                                                                                                                                                                                            F          F   �       v   �    dc�9    �   D   F   v      P                ocelot::scenegraph::description::Entity().name("intro_progress")5��    D   P                  �                     5�_�                    U   T    ����                                                                                                                                                                                                                                                                                                                                                             dcЊ     �   T   V   t      T            properties.vec2Properties = {{"iResolution", glm::vec2(width, height)}};   ,            properties.floatProperties = {};5��    T   T                 :                     �    U                      G                      5�_�                    V   *    ����                                                                                                                                                                                                                                                                                                                                                             dcД     �   U   W   u      .            properties.floatProperties = {{}};5��    U   *                  e                     5�_�                    V   +    ����                                                                                                                                                                                                                                                                                                                                                             dcЕ     �   U   W   u      0            properties.floatProperties = {{""}};5��    U   +                  f                     �    U   +                 f                    5�_�                    V   ,    ����                                                                                                                                                                                                                                                                                                                                                             dcЙ     �   U   W   u      5            properties.floatProperties = {{"iTime"}};5��    U   ,                  g                     5�_�                    V   2    ����                                                                                                                                                                                                                                                                                                                                                             dcМ    �   U   W   u      <            properties.floatProperties = {{"iTime", 10.0f}};5��    U   2                  m                     5�_�                    B   �    ����                                                                                                                                                                                                                                                                                                                            B   �       B   �       v   �    dc��     �   A   C   u      �                ocelot::scenegraph::description::Entity().name("intro_model").transform(ocelot::scenegraph::Transform().setPosition({0,0,0}).setScale(const glm::vec3 &scale)),5��    A   �               	   ?              	       �    A   �                 F                    �    A   �                 @                    �    A   �                  @                     5�_�                    B   �    ����                                                                                                                                                                                                                                                                                                                            C   �       C   �       v   �    dc�     �   A   C   u      �                ocelot::scenegraph::description::Entity().name("intro_model").transform(ocelot::scenegraph::Transform().setPosition({0,0,0}).setScale(glm::vec3())),�         u      $#include "glm/ext/vector_float3.hpp"5��    A   �              	   I             	       �    A   �                 N                    �                          �              %       �    B   �                  w                     5�_�      	              C   �    ����                                                                                                                                                                                                                                                                                                                            C   �       C   �       v   �    dc�    �   B   D   v      �                ocelot::scenegraph::description::Entity().name("intro_model").transform(ocelot::scenegraph::Transform().setPosition({0,0,0}).setScale(glm::vec3(0.5f))),5��    B   �                  x                     5�_�      
           	   C   �    ����                                                                                                                                                                                                                                                                                                                            C   �       C   �       v   �    dc�7     �   B   D   v      �                ocelot::scenegraph::description::Entity().name("intro_model").transform(ocelot::scenegraph::Transform().setPosition({0,0,0}).setScale(glm::vec3(.5f))),5��    B   �                  x                     5�_�   	              
   C   �    ����                                                                                                                                                                                                                                                                                                                            C   �       C   �       v   �    dc�8    �   B   D   v      �                ocelot::scenegraph::description::Entity().name("intro_model").transform(ocelot::scenegraph::Transform().setPosition({0,0,0}).setScale(glm::vec3(1.5f))),5��    B   �                  x                     5�_�   
                  C   �    ����                                                                                                                                                                                                                                                                                                                            C   �       C   �       v   �    dc�n    �   B   D   v      �                ocelot::scenegraph::description::Entity().name("intro_model").transform(ocelot::scenegraph::Transform().setPosition({0,0,0}))),5��    B   �                  d                     5��