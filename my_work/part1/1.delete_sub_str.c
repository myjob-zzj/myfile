�}�s �  �\��˰���Lp,��|N@3����L#�|��I�,�Z3�3%��zT�*��4�����<�3g��<=�ȯ���3�X�B���4�$�'�� �za�E��~[[�h�dEV�/�����1��X���k��I��-������[󞕐i�� �0��Р��"��Zz����^ �WگE�� ���}HU�����T��lO����M���E�T�|���������v�)���q�y�Cڃ�"��T�p�����n�dp����(J��2bȁ����{�������},T2����Xm�z�֕�o��g���I��d���q�0B5O|`�c��_��$i�ˌ%q����::�VSI�aH������6KV2kҿ�C���i�XS�l��݇���^��`���|q��sp�=���S�'���ٙ�:t!���F�/�)����-,�Q��<]�Xi2���	3y�lz�kzGM�4���b����>���VVX<l1_R:��� 8�|��#�j������6��+Y��no)�͆��E'��}bT�,����8����xC���x�Kd;$=ߺ{��5�����_`cab�YM5{j:�e�'	�$�uSs)Ą����_aڋY-���_F>�/L7�7���r���LZ<�I���3Z�m��Cc�G�<�$��|�(������fA�V����6� �eg�5ԩ��6�X*(<Kv!S�W�Mig�\�e��yU����F`㣉~[��3P��N�z�r��o%���D�Q�����%�x7ߙ2��穪	�rPRqA���20T{ rq�PCA�t��@�V_����{	㎬� ��8����G}<���{�̗EL�˼�R�<�c��J����`y�`9E�ϬG�; һ��,�M$z�Ȝ���?�e��w�Z`5��;{�g1LT\�TǠ�s��j�[$I�"euJ�YO�����Nߔ����? ��<J��r�J�ۼY���։�l�$��爜[l/�r^H3�et��2Nxʴ�"�R�ݞD�xc�n����7T��|�M{f��b텟&��<%���Cb%�T�"~���P]�u6���mMS辈@eٳ'�NA�r�-k�ԄĬ��χ2��T��w_%B��vA"���C�~1JztW�w�1���so�o0�v[錚Pg<��C�V�[�N���i��6�;dt���Bb�	�zQb�\8���0bu&Un�j�@�Wz���Rs�e$�:ub*{B���.�.sp�{��;h��CƣWO�ͅӂ��k�#��'u��',1'�W�9��ZA��LT]�����%�1�R^ͯʗ�����E2L��K��z�!���,&L`����^����puI@Oj�V�� ��O3���]R��?v��:9ѯ%���e$��Aw�y i�3]�L��0p��賆V�:7���L��:�ct0�� 0�y\��O�Ħ�v~B����(���� �j�s`����/��h3k���q�p�����d���_buf_size;		//输出空间大小
	int n;
	printf("输入原字符串:");
	scanf("%s",str);
	printf("输入子串:");
	scanf("%s",sub_str);
	printf("输入要输出的空间大小:");
	scanf("%d",&out_buf_size);
	n = delete_sub_str(str,sub_str,out_buf,out_buf_size);
	printf("子串个数:%d\n",n);
	return 0;
	
}


