Vim�UnDo� W�u:yx�,��Wbs���B]���lxp̈�   ;       namespace batchdemo                             d8A�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             d87�     �         4       5��                          �                     �                          �                     �                         �                    �       
                                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d87�     �         5      namespace sample5��                                              �                                               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d87�     �         6      {5��                                              �                                               �                                            �              	       	         	       	       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d87�     �         7          namespace batchdemo5��                        &                     �                      	   '             	       �                         '                    5�_�                    2       ����                                                                                                                                                                                                                                                                                                                                                             d87�     �   1   4   8      };5��    1                     �                     �    2                      �                     �    2   
                 �                    �    2          	       	   �      	       	       5�_�                    3       ����                                                                                                                                                                                                                                                                                                                                                             d87�     �   2   5   9          }  // namespace batchdemo5��    2                    �                     �    3                     �                    �    3   
                  �                     �    3          
           �      
               �    3                     �                    �    3                     �                    �    3                     �                    �    3                     �                    5�_�      	                     ����                                                                                                                                                                                                                                                                                                                            2                    v       d87�    �      3   :      template <typename Scene>   (class Layer : public ocelot::core::Layer   {       public:   I    Layer(ocelot::core::Scene<Scene> &&scene) : m_scene{std::move(scene)}       {}       "    void update(float dt) override       {           m_scene.update(dt);           m_scene.render();       }       ,    void dump(std::ostream &stream) override       {           stream << m_scene;       }           private:   '    ocelot::core::Scene<Scene> m_scene;   };5��                          -                     �                          O                     �                          �                     �                          �                    �    !                     �                    �    "                     �                    �    $                                          �    %                     +                    �    &                     9                    �    '                     ]                    �    (                                         �    *                     �                    �    +                     �                    �    ,                     �                    �    -                     �                    �    /                                         �    0                                         �    1                      H                     5�_�                	   6        ����                                                                                                                                                                                                                                                                                                                            6           9   J       v   J    d8A     �   5   7   :      9std::shared_ptr<ocelot::core::Layer> loadScene(int index,   B                                               unsigned instances,   J                                               const glm::ivec2 &viewport,   K                                               const std::string &texture);5��    5          K           �                    5�_�   	      
          3        ����                                                                                                                                                                                                                                                                                                                            6           6   J       v   J    d8A     �   2   7   7          }  // namespace batchdemo�   3   4   7    5��    2                  K   S                    5�_�                    3        ����                                                                                                                                                                                                                                                                                                                            9           9   J       v   J    d8A     �   2   4   :      9std::shared_ptr<ocelot::core::Layer> loadScene(int index,5��    2                      S                     5�_�                    4       ����                                                                                                                                                                                                                                                                                                                            9           9   J       v   J    d8A     �   2   4   :      A        std::shared_ptr<ocelot::core::Layer> loadScene(int index,   :                                       unsigned instances,�   3   5   :      B                                               unsigned instances,5��    3                     �                     �    3                      �                     �    2   A                  �                     5�_�                    3   A    ����                                                                                                                                                                                                                                                                                                                            8           8   J       v   J    d8A     �   2   5   9      {        std::shared_ptr<ocelot::core::Layer> loadScene(int index,                                       unsigned instances,5��    2   A       '         �      '       	       �    3                     �                    5�_�                    5       ����                                                                                                                                                                                                                                                                                                                            9           9   J       v   J    d8A     �   3   5   :      #                unsigned instances,   :                               const glm::ivec2 &viewport,�   4   6   :      J                                               const glm::ivec2 &viewport,5��    4                     �                     �    4                      �                     �    3   #                  �                     5�_�                    4   #    ����                                                                                                                                                                                                                                                                                                                            8           8   J       v   J    d8A     �   3   6   9      ]                unsigned instances,                               const glm::ivec2 &viewport,5��    3   #                �                    5�_�                    6       ����                                                                                                                                                                                                                                                                                                                            9           9   J       v   J    d8A     �   4   6   :      +                const glm::ivec2 &viewport,   X                               const std::string &texture);    }  // namespace batchdemo�   5   7   :      h                                               const std::string &texture);    }  // namespace batchdemo5��    5                     �                     �    5                      �                     �    4   +                  �                     5�_�                    5   +    ����                                                                                                                                                                                                                                                                                                                            8           8   J       v   J    d8A     �   4   7   9      �                const glm::ivec2 &viewport,                               const std::string &texture);    }  // namespace batchdemo5��    4   +                �                    5�_�                    4       ����                                                                                                                                                                                                                                                                                                                            9           9   J       v   J    d8A&     �   3   5   :      #                unsigned instances,5��    3                  (   �              (       �    3   4                 �                    5�_�                    5       ����                                                                                                                                                                                                                                                                                                                            9           9   J       v   J    d8A8     �   4   6   :      +                const glm::ivec2 &viewport,5��    4                  (   �              (       �    4   4                                     5�_�                    6       ����                                                                                                                                                                                                                                                                                                                            9           9   J       v   J    d8A@     �   5   7   :      I                const std::string &texture);    }  // namespace batchdemo5��    5                  '   C              '       5�_�                    6   W    ����                                                                                                                                                                                                                                                                                                                            9           9   J       v   J    d8AF     �   5   7   :      p                                                       const std::string &texture);    }  // namespace batchdemo5��    5   S                  �                     5�_�                    6   S    ����                                                                                                                                                                                                                                                                                                                            9           9   J       v   J    d8AG    �   5   8   :      l                                                       const std::string &texture);}  // namespace batchdemo5��    5   S              7   �              8       �    6           7          �      7              5�_�                           ����                                                                                                                                                                                                                                                                                                                            :           :   J       v   J    d8A�     �         ;          namespace batchdemo5��              	                 	               5�_�                            ����                                                                                                                                                                                                                                                                                                                            :           :   J       v   J    d8A�    �         ;          namespace 5��                      	                 	       5�_�   	              
   3        ����                                                                                                                                                                                                                                                                                                                            7           7   J       v   J    d8A     �   2   3   7       5��    2                      S                     �    2                     S                    �    2                     T                     �    2                      S                     5�_�              	      6   '    ����                                                                                                                                                                                                                                                                                                                            2                    v       d8@�     �   5   7        5��    5                      �      :               5��