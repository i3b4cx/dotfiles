Vim�UnDo� TN��)MOS�>�fԋ�G^���� 4��s   N                                  d+h7    _�                             ����                                                                                                                                                                                                                                                                                                                                                             d+h     �         H       5��                          �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d+h     �          I       5��                          �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d+h     �         J       5��                          �                     �       
                 �                    �       
                 �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d+h     �          J      namespace scene5��                         �                     �                          �                     �                         �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d+h     �      !   K      {5��                         �                     �                          �                     �                                            5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d+h     �      "   L          namespace particle5��                                             �                       	                	       �                                              5�_�                    K       ����                                                                                                                                                                                                                                                                                                                                                             d+h      �   J   L   M      };5��    J                     �
                     �    J                     �
                     5�_�      	              K       ����                                                                                                                                                                                                                                                                                                                                                             d+h!     �   J   M   M      };5��    J                     �
                     �    K                      �
                     �    K                    �
                    5�_�      
           	   L       ����                                                                                                                                                                                                                                                                                                                                                             d+h'     �   K   N   N          }  // namespace particle5��    K                    �
                     �    L                     �
                    �    L          	           �
      	               �    L                     �
                    �    L                    �
                    5�_�   	              
   #       ����                                                                                                                                                                                                                                                                                                                            K          #          v       d+h5     �   "   L   O   )   4class ParticleScene : public ocelot::core::SceneImpl   {       public:   <    using ParticleConfig = ocelot::particle::ParticleConfig;   B    using CircleConfig   = ocelot::particle::CircleShaper::Config;       /**        * @brief Constructor   0     * @param viewport Frame viewport dimensions   P     * @param target (optional) Render target. Defaults to window render target.        */   &    ParticleScene(glm::ivec2 viewport,   #                  int maxParticles,   "                  float spawnRate,   )                  ParticleConfig pConfig,   '                  CircleConfig cConfig,   2                  RenderTarget *target = nullptr);           /**         * @brief Clean up the scene        */       ~ParticleScene();       #    void update(float dt) override;   F    void setViewport(const ocelot::core::Viewport &viewport) override;   j    void setRenderTarget(ocelot::scenegraph::RenderTarget<ocelot::scenegraph::Renderer> *target) override;           private:   ,    ocelot::gles2::QueueRenderer m_renderer;       RenderView m_view;       RenderTarget *m_target;   &    WindowRenderTarget m_windowTarget;   $    Factory<Transform> m_transforms;       Transform *m_root;   %    std::unique_ptr<Camera> m_camera;   *    ocelot::gles2::ShaderProgram m_shader;   &    Factory<Texture> m_textureFactory;   1    ocelot::gles2::ShaderManager m_shaderManager;   8    std::unique_ptr<ocelot::gles2::Material> m_material;   7    std::unique_ptr<ocelot::particle::Shaper> m_shaper;   +    ocelot::gles2::ParticleEffect m_effect;   };5��    "                                           �    #                      P                     �    $                     Z                    �    %                     n                    �    &                     �                    �    '                     �                    �    (                                         �    )                     0                    �    *                     i                    �    +                     �                    �    ,                     �                    �    -                                         �    .                     -                    �    /                     X                    �    0                     �                    �    1                     �                    �    3                     �                    �    4                                         �    5                     /                    �    6                     ?                    �    8                     ^                    �    9                     �                    �    :                     �                    �    <                     M	                    �    =                     b	                    �    >                     �	                    �    ?                     �	                    �    @                     �	                    �    A                     	
                    �    B                     6
                    �    C                     U
                    �    D                     �
                    �    E                     �
                    �    F                     �
                    �    G                                         �    H                     `                    �    I                     �                    �    J                      �                     5�_�   
                  "        ����                                                                                                                                                                                                                                                                                                                            K          #          v       d+h6    �   !   "           5��    !                                           5��