Vim�UnDo� ՛vo���PM��!׶�W���^���!� ��   �   #      require("toggleterm").setup()   U   #                       d'mw    _�                     V       ����                                                                                                                                                                                                                                                                                                                                                             d'j�     �   U   W   �          end5��    U                     K	                     5�_�                    V       ����                                                                                                                                                                                                                                                                                                                                                             d'j�     �   U   W   �          end, opts = {}5��    U                     U	                     �    U                    X	                    �    U                    U	                    �    U   $                 h	                    5�_�                    V   <    ����                                                                                                                                                                                                                                                                                                                                                             d'j�    �   U   W   �      ?    end, opts = {terminal_shaders = false, open_mapping = [[]]}5��    U   <                  �	                     5�_�                    �   ;    ����                                                                                                                                                                                                                                                                                                                                                             d'j�     �   �   �          @key_mapper('n', '<C-t>', ':lua vim.toggleterm.ToggleTerm()<CR>')5��    �                      (      A               5�_�                    �   o    ����                                                                                                                                                                                                                                                                                                                                                             d'j�     �   �              okeyset("i", "<cr>", [[coc#pum#visible() ? coc#pum#confirm() : "\<C-g>u\<CR>\<c-r>=coc#on_enter()\<CR>"]], opts)5��    �   o                                       �    �                                           �    �                                        5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             d'j�     �   �              keyset()5��    �                     !                     �    �                    !                    �    �                    %                    �    �                    '                    5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             d'k     �   �   �          keyset("t", "<)5��    �                                           5�_�      
              �   o    ����                                                                                                                                                                                                                                                                                                                                                             d'k     �   �               �   �            �   �              okeyset("i", "<cr>", [[coc#pum#visible() ? coc#pum#confirm() : "\<C-g>u\<CR>\<c-r>=coc#on_enter()\<CR>"]], opts)5��    �   o                                       �    �                   @                 @       5�_�         	       
   V       ����                                                                                                                                                                                                                                                                                                                                                             d'k�    �   U   W   �      D    end, opts = {terminal_shaders = false, open_mapping = [[<c-\>]]}5��    U          =           K	      =               5�_�   
                �   	    ����                                                                                                                                                                                                                                                                                                                            �   >       �   	       v   	    d'k�     �   �              @vim.cmd('autocmd! TermOpen term://* lua set_terminal_keymaps()')�   �            5��    �   	       6           �      6               �    �   	              C   �              j       5�_�                    �   C    ����                                                                                                                                                                                                                                                                                                                            �   >       �   	       v   	    d'l     �   �              D      \ tnoremap <silent><c-t> <Cmd>exe v:count1 . "ToggleTerm"<CR>)5��    �   C                  P                     5�_�                    �       ����                                                                                                                                                                                                                                                                                                                            �   >       �   	       v   	    d'l    �   �              /vim.cmd('autocmd TermEnter term://*toggleterm#*   =tnoremap <silent><c-t> <Cmd>exe v:count1 . "ToggleTerm"<CR>')�   �              E      \ tnoremap <silent><c-t> <Cmd>exe v:count1 . "ToggleTerm"<CR>')5��    �                                          �    �                                           �    �   /                                       �    �   /                                       5�_�                    �   m    ����                                                                                                                                                                                                                                                                                                                                                             d'l0     �   �              mvim.cmd('autocmd TermEnter term://*toggleterm#* tnoremap <silent><c-t> <Cmd>exe v:count1 . "ToggleTerm"<CR>')5��    �   m                  J                     �    �                      K                     �    �                    N                    5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             d'l5     �   �              	vim.cmd()�   �            5��    �                 @   S              |       5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                             d'l:     �   �              Ainoremap <silent><c-t> <Esc><Cmd>exe v:count1 . "ToggleTerm"<CR>)5��    �                   	   �              	       5�_�                    �   I    ����                                                                                                                                                                                                                                                                                                                                                             d'lA     �   �              Jvim.cmd('inoremap <silent><c-t> <Esc><Cmd>exe v:count1 . "ToggleTerm"<CR>)5��    �   I                  �                     5�_�                    �   C    ����                                                                                                                                                                                                                                                                                                                                                             d'lC     �   �   �   �      Cvim.cmd(nnoremap <silent><c-t> <Cmd>exe v:count1 . "ToggleTerm"<CR>5��    �   C                  �                     5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             d'lH    �   �   �   �      Evim.cmd(nnoremap <silent><c-t> <Cmd>exe v:count1 . "ToggleTerm"<CR>')5��    �                     S                     5�_�                    V       ����                                                                                                                                                                                                                                                                                                                                                             d'li     �   U   W   �          end5��    U                     K	                     5�_�                    V       ����                                                                                                                                                                                                                                                                                                                                                             d'ln   	 �   U   W   �          end, opts = {}5��    U                     U	                     5�_�                    V        ����                                                                                                                                                                                                                                                                                                                                                             d'l}   
 �   U   W   �      *    end, opts = {terminal_shaders = false}5��    U                      d	                     5�_�                    V       ����                                                                                                                                                                                                                                                                                                                                                             d'l�     �   U   W   �      )    end, opts = {terminal_shader = false}5��    U                     U	                     5�_�                    V       ����                                                                                                                                                                                                                                                                                                                                                             d'l�    �   U   W   �          end, opts = {= false}5��    U                     U	                     5�_�                    V       ����                                                                                                                                                                                                                                                                                                                                                             d'm0     �   U   W   �      )    end, opts = {shade_terminals = false}5��    U          "           K	      "               5�_�                    U   #    ����                                                                                                                                                                                                                                                                                                                                                             d'mF     �   T   V   �      #      require("toggleterm").setup()5��    T   !                 A	                    5�_�                    U   "    ����                                                                                                                                                                                                                                                                                                                                                             d'mK    �   T   V   �      #      require("toggleterm").setup{}5��    T   "                  B	                     5�_�                    U   !    ����                                                                                                                                                                                                                                                                                                                                                             d'mt     �   T   V   �      :      require("toggleterm").setup{shade_terminals = false}5��    T   !                  A	                     5�_�                     U   ;    ����                                                                                                                                                                                                                                                                                                                                                             d'mv    �   T   V   �      ;      require("toggleterm").setup({shade_terminals = false}5��    T   ;                  [	                     5�_�   
                 �        ����                                                                                                                                                                                                                                                                                                                                                             d'k�    �   �   �        5��    �                      �      A               5�_�              
   	   �   ?    ����                                                                                                                                                                                                                                                                                                                                                             d'kr    �   �   �        5��    �                            A               5��