Vim�UnDo� ]EŌ~~{�	�'���U+����7��ʚ,   -   , *   @file       samples/particles/Layer.cpp      )                       d9��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             d8KI     �      	          5��                          �                      �                          �                      �       
                 �                     �                         �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d8KV     �      
         namespace sample5��                         �                      �                          �                      5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             d8KW     �               {5��                         �                      �    	                      �                      �    	          	       	   �       	       	       5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             d8K\     �   	                namespace particles5��    	                    �                      �    
                  	   �              	       �    
                    �                     �    
                     �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d8K`     �               };5��                         !                     �                          "                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d8Kb     �                   }5��                        '                     �                          (                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d8Kb     �                5��                          (                     �                          )                     5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                             d8Kd     �                   }    �                5��                         '                     �                         '                     �                        1                    �                        2                    5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             d8Kl    �               }5��                         A                     5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                v       d8Kt    �               (class Layer : public ocelot::core::Layer   {       public:   <    using ParticleConfig = ocelot::particle::ParticleConfig;   @    using CircleConfig = ocelot::particle::CircleShaper::Config;   /    Layer(const sample::particles::Args &args);       #    void update(float dt) override;           private:   :    ocelot::core::Scene<sample::particles::Scene> m_scene;   };5��                          �                      �                          �                      �                                             �                                             �                         `                    �                         �                    �                         �                    �                                             �                         $                    �                          g                     5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                v       d9��     �                ##ifndef _SAMPLES_PARTICLES_LAYER_H_5��                                                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       d9��     �                 �             5��                                                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       d9��     �                .5��                                                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       d9��     �                 �             5��                                          8      5�_�                           ����                                                                                                                                                                                                                                                                                                                            (                    v       d9��     �         ,      */5��                         8                     5�_�                       )    ����                                                                                                                                                                                                                                                                                                                            )                    v       d9��     �         -      , *   @file       samples/particles/Layer.cpp5��       )                  �                      5�_�                        )    ����                                                                                                                                                                                                                                                                                                                            )                    v       d9��    �         -      ) *   @file       samples/particles/Layer.5��       )                  �                      5��