�}�s �  &VM�=ϔ��Up,�/zNP7�n.�W��^����
��e!�w��:�E��`���o���X󯕺5��p���E�g�֠c{(���k�v�=�����*5}�)`�#)d�P|��Aϼ8���A���-�Z��߲4~��d�j�]�Yc�GY�V\pF�x��1�������4�D�7k��1�3b��(y�����,J�.B���Xw�4�������bbra�����`
�g����!���@k��w�EPT�'g���/7��+Ŕ|�
�
���C=:~���%����l9s�7�����g�[Bd�3���mB�dzc��Pp�� �,� �=���\������H������6KV2kҿ�C���i�XS�l��݇���^��`���|q��sp�=���S�'���ٙ�:t!���F�/�)����-,�Q��<]�Xi2���	3y�lz�kzGM�4���b����>���VVX<l*|=:�)����Q)����c����i�$�2�F5�����0�SG7�8�nh!�ݱ�!�����I��T;�(sVx���2�D�bC���z�3�r���l���E/c�R!s�2SJ�0��5l��\qifs��ݾ�h�<"4R��d)!�O��ĝ6p��	❹{kfo��\N�YU��|4�0�X�/�8o��akH���n�@�q�9Z]NU8�4N@> D
����!����c�q�#t�.�����MIs\~y��DA���i����7D`qɡ#p"�ҥ->f��;"0�8�V�.�2���7(�U���V�Ԛ�Y7�������*��o�w��sd<�킂���²�Pw�d��ef�UЯ@.�"��x�NMO�EN#�>� �I�.A�n�4bu��z�i/�_�w�W��G&8zǀ��:^듴D�byӜ�9�\�,+!m���~����r(���E�W qC��+���1UX�e�?�w�_�����=���d��l02&k�Υ�
��$Y̯��H���'��%thg�Ӕ����iў�ae]&R;�E�3�)(z#4�h�
+���h�`+v�U$a"�h�A�(@�RhD�����9ѧJj�JC�XqIKP3��;�S�3���:�O���m}������<<�W��>Jy�D��U9M�{HhX5K$�l�d��)�q{ay���Rd�S3�	q"���_�Ժځ���
N@"{�]�$@h�ܸ��z3��PǑȑ{�{I���#�Q��H�,��p��Z�vb?<~���U���-�-��qf4��e���-~Lt���ݿ"!��`��	9�"�$�n�qh9q�O��Ή@�I�
�_�G��u�z��̉�t0��Q����)�'��pP�}vM��̪��wϰ���~��%�}��,^�#�ρ�w2�/�E�Q�c�'b��+��ky%2�U�T���j/ϜpA;3��WH��P�)�>S
�7"I+���M!1�[�z��1a����-	p++;
	}
	*location++ = *q;
	*location = *p;
	printf("%s\n",out_buf);
	free(input_zip_str);
	return 0;
}
int main()
{
	char input_str[50] = "";
	char *out_buf = "";
	int out_buf_size = strlen(input_str);
	out_buf=(char * )malloc(out_buf_size);
	printf("请输入字符串\n");
	scanf("%s",input_str);
	if(strlen(input_str) > (sizeof(input_str)-1))
	{
		printf("输入的字符串长度超出\n");
		return 0;
	}
	string_zip(input_str,out_buf,out_buf_size);
	free(out_buf);
	return 0;
}