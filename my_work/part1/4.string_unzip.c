�}�s �  �TMV� ���<p,��|JP7���NU\n�Hӡ\�bm�1s5�U/`h4���n|��uN�,հp�J�-��9r��v獖#B����woTLS�G��Q$��ޡWU���Y�#�ڌm�)�l�o�k-v�&.Prw�$�r� ������̫�Q�,����^��?�$6��S��5ɮË'g�Ң��(�G�j��$��D�)	��wp�Y��/��'���I 4�t8d!Q�,�`���uG��Ъ��:���ɯSB�8`���@���Q'% �e�=�B�X�2�:�5�&��y+LJ��@��*ݩ��;��qb�
�>�]��a�v�P3���q�N��Q:�VSI�aH������6KV2kҿ�C���i�XS�l��݇���^��`���|q��sp�=���S�'���ٙ�:t!���F�/�)����-,�Q��<]�Xi2���	3y�lz�kzGM�4���b����>���VVX<eturn 0;
		}
		p++;
	}
	printf("%s\n",out_buf);
}
int main()
{
	char input_str[50] = "";
	char *out_buf = "";
	int out_buf_size = 3*strlen(input_str);
	out_buf = malloc(out_buf_size);
	printf("请输入要解压的字符串\n");
	scanf("%s",input_str);
	if(strlen(input_str) > (sizeof(input_str)-1))
	{
		printf("输入的字符串长度超出\n");
		return 0;
	}
	string_unzip(input_str,out_buf,out_buf_size);
	free(out_buf);
	return 0;
}