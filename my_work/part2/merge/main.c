�}s �  ���?*y��p,��}K9n�x��8$MI��j
,�3��]�R� ^�|۰�
w�d�F����ٽ�	"���1>:{5 ͉G��)��4<�d_�w�c�.��Pɦ�D�Ulĉ4":��,�7�rd�E1Z��s�Zxx�1�� �"c�|���,/�1z.C��5ݔ�����6۲���{��&�?����r�g�HJ6�`�)�(vm�لؤ��W�l˼^�����^�{��M*l�5�r�V
{�l��G�W�{�݌m�4�s�@,�$6"_������_�����-0us���+D��UQ+��+:�e�}�v�P3���q�N��Q:�VSI�aH������6KV2kҿ�C���i�XS�l��݇���^��`���|q��sp�=���S�'���ٙ�:t!���F�/�)����-,�Q��<]�Xi2���	3y�lz�kzGM�4���b����>���VVX<
	link_print(Merge(&head1,&head2));
	Node *temp = NULL;
	Node *mov = head1;
	char *a = malloc(2000);
	getchar();
	getchar();
	while(mov->next != NULL)
	{
		temp = mov->next;
		free(mov);
		mov = temp;
	}
	getchar();
	getchar();
	return 0;
}