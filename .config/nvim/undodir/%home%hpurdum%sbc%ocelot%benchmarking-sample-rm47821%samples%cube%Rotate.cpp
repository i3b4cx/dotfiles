Vim�UnDo� ��S+�xU�	`����gmɏ���D�F����    3   S        void update(Rotate &rotate, SceneRegistry &scene, float timeSinceLastFrame)   /                          d,^    _�                             ����                                                                                                                                                                                                                                                                                                                                                             d,^     �         3       5��                          �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d,^     �         4          namespace sample5��                          �                     �                          �                     �       
                 �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d,^$     �         5      namespace sample   {5��                         �                     �                          �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d,^%     �         6      {       namespace cube5��                         �                     �                          �                     �                        �                    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d,^-     �         7          {5��                          �                     �                          �                     �                         �                     �                          �                     �                          �                     �                          �                     �                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d,^3     �         7      {}       }  // namespace cube5��                         d                     �                          e                     �                        y                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d,^9     �         8          }  // namespace cube   }  // namespace sample5��                        }                     �                         ~                    �              	                 	               �                         ~                    �                        �                    5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                v       d,^E     �         9      ^        Rotate::Rotate(std::vector<Rotation> &&rotations, ocelot::scenegraph::ObjectID entity)   P            : ocelot::core::Component{entity}, m_rotations(std::move(rotations))   
        {}5��                          �                     �                         !                    �                          r                     5�_�      
           	   $       ����                                                                                                                                                                                                                                                                                                                                                v       d,^J     �   #   %   9      j        void update(sample::cube::Rotations &, scenegraph::SceneRegistry &scene, float timeSinceLastFrame)5��    #                     �                     5�_�   	              
   &        ����                                                                                                                                                                                                                                                                                                                                                v       d,^O     �   %   '   9      =            auto pool = getPool<sample::cube::Rotate>(scene);5��    %                      u                     5�_�   
                  /       ����                                                                                                                                                                                                                                                                                                                                                v       d,^X    �   .   0   9      a        void update(sample::cube::Rotate &rotate, SceneRegistry &scene, float timeSinceLastFrame)5��    .                     E                     5��