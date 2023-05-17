Vim�UnDo� �0'	/F��@����)�kq�fe-p��� k$��   h   *            update(beh, scene, scene, dt);   e                          d9��    _�                     "       ����                                                                                                                                                                                                                                                                                                                                                             d9�U     �   !   $   e      {5��    !                     =                     �    "                      >                     �    "                    D                    �    "          	       	   L      	       	       5�_�                    #       ����                                                                                                                                                                                                                                                                                                                                                             d9�Z     �   "   %   f          namespace animation5��    "                    U                     �    #                  	   V             	       �    #                     V                    5�_�                    Q   �    ����                                                                                                                                                                                                                                                                                                                                                             d9�`     �   P   S   g      �    void update(BehaviorSystem &beh, ocelot::scenegraph::SceneRegistry &reg, ocelot::animation::AnimationSystem &anim, float dt);5��    P   �                 7
                     �    Q                     <
                     �    Q                    <
                    5�_�                    %       ����                                                                                                                                                                                                                                                                                                                            Q          %          v       d9�p    �   $   R   h   -       /**   ;     * @brief System used for updating the custom behaviors        */       struct BehaviorSystem       {};           /**   W     * @brief Manually controls animations every few seconds via the animator component        */       struct ManualAnimation       {   O        ocelot::scenegraph::ObjectID entity;    ///< Entity this is attached to   T        ocelot::scenegraph::ObjectID animator;  ///< Animator attached to the entity   A        float time;                             ///< Current time   B        bool playing;                           ///< Current state               /**   C         * @brief Method needed for compatibility with the registry            */   3        void setID(ocelot::scenegraph::ObjectID id)   
        {}       };           /**   G     * @brief Controls animations via values in the animator controller        */       struct StateAnimation       {   J        ocelot::scenegraph::ObjectID controller;  ///< Animator controller   C        float timer;                              ///< Current time               /**   C         * @brief Method needed for compatibility with the registry            */   3        void setID(ocelot::scenegraph::ObjectID id)   
        {}       };           /**   (     * @brief Update the behavior system        *   ~     * This is a custom update method that takes in both a scene registry and animation system as input. We need the animation   )     * system for controlling animations.        */   �    void update(BehaviorSystem &beh, ocelot::scenegraph::SceneRegistry &reg, ocelot::animation::AnimationSystem &anim, float dt);5��    $                     \                    �    %                  	   h             	       �    &                  	   �             	       �    '                     �                    �    (                     �                    �    *                     �                    �    +                  	   �             	       �    ,                  	   G             	       �    -                     S                    �    .                     r                    �    /                     |                    �    0                     �                    �    1                     )                    �    2                     o                    �    4                     �                    �    5           	          �      	              �    6           	                	              �    7                                         �    8                     W                    �    9                     f                    �    ;                     r                    �    <                  	   ~             	       �    =                  	   �             	       �    >                     �                    �    ?                     �                    �    @                     �                    �    A                     M                    �    C                     �                    �    D           	          �      	              �    E           	          �      	              �    F                     �                    �    G                     6	                    �    H                     E	                    �    J                     Q	                    �    K                  	   ]	             	       �    L                  	   �	             	       �    M                  	   �	             	       �    N                  	   
             	       �    O                  	   F
             	       �    P                     R
                    5�_�                    c       ����                                                                                                                                                                                                                                                                                                                            Q          %          v       d9��     �   b   d   h      H        void update(sample::BehaviorSystem &beh, Scene &scene, float dt)5��    b                     �                     5�_�                     e       ����                                                                                                                                                                                                                                                                                                                            Q          %          v       d9��    �   d   f   h      *            update(beh, scene, scene, dt);5��    d                     �                     �    d                      �                     �    d                     �                     �    d                      �                     �    d                     �                     5��