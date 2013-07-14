misra规则修改代码说明

gcc-misra-11-rules-realized.zip 完整的源代码git库，包含修改过程的历史记录。目前共实现了11条规则check
devFuncDef.sh		开发时用到的自定义shell函数（build、run、测试的脚本）
test			测试用例、测试结果和配置文件
	2.2.c ...	测试用例文件
	sc.conf		关于开启某一条规则的配置文件，其中[x.x]=1表示启用x.x这条规则的检查，[x.x]=0表示不启用
	test-log.txt 	部分check warning测试的结果


emacs开发 linux环境
