�}+s �  Ԡv�uz\���vp,��~NP3P�L�{4-o��FMn���ᶙ�T�ͭ�饟���iC<eC�4K�5�j�ݑ��YߤvJ��ѵ�0��Qh�7>�<�����<ʁ�{e[�͈T�~���
R���݉�6�b��B+���"�4\�O����O=����8j[��}RV�X6�s-!?l�w�׫�H��B���[�c���&	6j���sZ�h/�;?I=�ˀ�O�O��Nu���V�JL��L�uR7j?��,�d!4�������t+������Bҥx�{T�{�TgL�uEq��4|c1c�'�cp ?�(:yK���&{�"�	���?g�'|���S�FݱBҫ*W��k�܋��4�9�䞠geH@�ㆭ��^��`���|q��sp�=���S�'���ٙ�:t!���F�/�)����-,�Q��<]�Xi2���	3y�lz�kzGM�4���b����>���VVX<l�,na]����o�ޭ�Eb-~���jM��	�,A�����s��Ǯ� ���S\�	�Et!�/�,��vo3���v�y��&�M<LRw��~�,�R��;(O��7�h@@��X��%�E�I݄G�K�Mw�6%@�Pl�
=w
�+�=?�m&kv��'?�5�8��(��x	WL��v�O�]�(��#%wm1I$
y�礻�	=���>{���n�d�!Cx�-?)�o_*tp&3�X��%���M����D�H_�×� ��2Q��9��?��*G�QG�󨪺닢�;A����}Q��.]��-/`+h�o�������d����z1�������O���T�TII�?-`�#)F�%���l����^���_Y��??F<�^v��A�|{*�i� l��Z��,��� ��7s�u�u�e=)e�^�C�Qy��b8j
����aM�v!JL\Mٹ��8��T.��R�\�WpSf�&M��t?c���CH�HNl�%�� ,�[�Cd�P����_���P�`��P��$]e��Z*]؃�.K��4Q��  ld7B>C3&��	z93U/�5�ê�~�}�TY5�BKR���ũl�Js��-�I�E1��)���[��q���{�"�k�I�	HĻ$�(�R��4��Q%g\Dס=�o{�: �nL_�����.Pҙ�mP��W3bՊU��'4]%��Ѡ���j>�=!�vj7{��oXs�>B���,�������&�l]v�v���4�W lٓ
e�޶kڭ3�`�G*�K⼱��pUåY^ʚ�k����AUS��gz˕B�([�n_���$���/ ���-�}��ve���R���;�����qB��S=�k��]��XT�nr\=���47)����g�xH�k ��/�w��`�\*q��;�oP�Ӿw��P)[I��V�cHG���0��m��^�{��I��6|PWo���q��@�l����9x���*G0g�6����fŸ��C����字符串\n");
	scanf("%s",input_str);
	if(strlen(input_str) > (sizeof(input_str)-1))
	{
		printf("输入的字符串长度超出\n");
		return 0;
	}
	string_convert(input_str, out_buf, out_buf_size);
	printf("%s\n",out_buf);
	return 0;
}