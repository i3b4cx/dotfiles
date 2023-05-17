Vim�UnDo� ���`��V�|��W���)�R��\pa��u��   K   q    std::shared_ptr<Layer> layer(new sample::signPanel::Layer(window, sample::signPanel::parseArgs(argc, argv)));   A   F                       d8�v    _�                            ����                                                                                                                                                                                                                                                                                                                                         	       v   	    d8]b     �         w      ,class SignLayer : public ocelot::core::Layer5��                         T                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       d8]f     �         w      �    SignLayer(ocelot::core::Window &w, sample::signPanel::PanelType type) : m_window(w), m_scene(sample::signPanel::buildScene(w, type))5��                         �                     5�_�                    3       ����                                                                                                                                                                                                                                                                                                                            3          3          v       d8]y     �   2   4   w      ,    static void fastRender(SignLayer &layer)5��    2                     u                     5�_�                    8       ����                                                                                                                                                                                                                                                                                                                            8          8   !       v   !    d8]|     �   7   9   w      /    static void dynamicRender(SignLayer &layer)5��    7                     �                     5�_�                    m   %    ����                                                                                                                                                                                                                                                                                                                            m   %       m   (       v   (    d8]�     �   l   n   w      O    std::shared_ptr<Layer> layer(new SignLayer(window, parseArgs(argc, argv)));5��    l   %                  �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                            m   %       m   (       v   (    d8]�     �         w      #include "ocelot/util/Log.h"5��                         L                     �                       
   M              
       �       	                 V                    �       	              	   V             	       5�_�                            ����                                                                                                                                                                                                                                                                                                                            F                     v        d8]�     �         x   +   (class Layer : public ocelot::core::Layer   {       public:   �    Layer(ocelot::core::Window &w, sample::signPanel::PanelType type) : m_window(w), m_scene(sample::signPanel::buildScene(w, type))       {   �        // SJC: We're loading configuration here mostly as a demonstration. Applications are free to load configuration in any way           // they choose   z        m_config = ocelot::loadConfigFromFile().unwrapOrElse([](std::string err) { return ocelot::loadDefaultConfig(); });   K        render   = m_config.dynamicBufferSwap ? dynamicRender : fastRender;       }           void update(float dt)       {           m_scene.update(dt);           render(*this);       }           void renderAndSwap()       {   '        BE_INFO("Rendering new frame");           m_scene.render();           m_window.swapBuffers();       }       (    static void fastRender(Layer &layer)       {           layer.renderAndSwap();       }       +    static void dynamicRender(Layer &layer)       {   +        if (layer.m_scene.needBufferSwap())   	        {   "            layer.renderAndSwap();   	        }       }           private:   #    ocelot::core::Window &m_window;   :    ocelot::core::Scene<sample::signPanel::Scene> m_scene;       ocelot::Config m_config;   %    void (*render)(SignLayer &layer);   };5��           *              a      �              5�_�      	              D   %    ����                                                                                                                                                                                                                                                                                                                                                 v        d8`2    �   C   E   N      K    std::shared_ptr<Layer> layer(new Layer(window, parseArgs(argc, argv)));5��    C   %                  7	                     �    C   1                 C	                    5�_�      
           	           ����                                                                                                                                                                                                                                                                                                                            2                      v        d8`j     �         N      >sample::signPanel::PanelType parseArgs(int argc, char *argv[])   {       if (argc < 2)       {   4        return sample::signPanel::SMALL_PROGRESSIVE;       }       &    uint8_t type = std::atoi(argv[1]);           switch (type)       {   2        case sample::signPanel::SMALL_PROGRESSIVE:   8            return sample::signPanel::SMALL_PROGRESSIVE;   2        case sample::signPanel::LARGE_PROGRESSIVE:   8            return sample::signPanel::LARGE_PROGRESSIVE;   1        case sample::signPanel::PANEL_TYPE_COUNT:   8            return sample::signPanel::SMALL_PROGRESSIVE;       }       0    return sample::signPanel::SMALL_PROGRESSIVE;   }5��                         c      Q              5�_�   	              
   0   F    ����                                                                                                                                                                                                                                                                                                                                                  v        d8`�    �   /   1   :      ^    std::shared_ptr<Layer> layer(new sample::signPanel::Layer(window, parseArgs(argc, argv)));5��    /   F                                       5�_�   
                         ����                                                                                                                                                                                                                                                                                                                            0   >       0   m       v   m    d8aH     �                !#include "ocelot/config/Config.h"5��                          x      "               5�_�                            ����                                                                                                                                                                                                                                                                                                                            /   >       /   m       v   m    d8b�     �                 5��                          ?                     5�_�                            ����                                                                                                                                                                                                                                                                                                                            .   >       .   m       v   m    d8b�     �                 5��                          ?                     5�_�                            ����                                                                                                                                                                                                                                                                                                                            -   >       -   m       v   m    d8b�     �                 5��                          >                     5�_�                            ����                                                                                                                                                                                                                                                                                                                            ,   >       ,   m       v   m    d8b�    �                 5��                          >                     5�_�                            ����                                                                                                                                                                                                                                                                                                                            +   >       +   m       v   m    d8�A     �      0   5       �         5    5��                          >              �      5�_�                            ����                                                                                                                                                                                                                                                                                                                            @   >       @   m       v   m    d8�B     �         J    5��                          >                     5�_�                            ����                                                                                                                                                                                                                                                                                                                            /                      v        d8�I    �      0   K      	        {               if (argc < 2)               {   <                return sample::signPanel::SMALL_PROGRESSIVE;               }       .            uint8_t type = std::atoi(argv[1]);                   switch (type)               {   :                case sample::signPanel::SMALL_PROGRESSIVE:   @                    return sample::signPanel::SMALL_PROGRESSIVE;   :                case sample::signPanel::LARGE_PROGRESSIVE:   @                    return sample::signPanel::LARGE_PROGRESSIVE;   9                case sample::signPanel::PANEL_TYPE_COUNT:   @                    return sample::signPanel::SMALL_PROGRESSIVE;               }       8            return sample::signPanel::SMALL_PROGRESSIVE;   	        }5��                          k                     �                         m                    �                                             �                         �                    �                         �                    �    !                     �                    �    #                     �                    �    $                     �                    �    %                                         �    &                     4                    �    '                     m                    �    (                     �                    �    )                     �                    �    *                                         �    +                     D                    �    -                     K                    �    .                      |                     5�_�                            ����                                                                                                                                                                                                                                                                                                                            /                      v        d8�_    �         K      +PanelType parseArgs(int argc, char *argv[])5��                          ?                     �                        G                    �                        P                    5�_�                     A   F    ����                                                                                                                                                                                                                                                                                                                            A   F       A   X       v   X    d8�u    �   @   B   K      q    std::shared_ptr<Layer> layer(new sample::signPanel::Layer(window, sample::signPanel::parseArgs(argc, argv)));5��    @   F                  4	                     5��