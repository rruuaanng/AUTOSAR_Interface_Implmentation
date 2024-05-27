#ifndef BENBEN_AUTOSAR_STD_COMPILER_H
#define BENBEN_AUTOSAR_STD_COMPILER_H

#define FUNC(rettype, memclass) rettype
 
#define FUNC_P2CONST(rettype, ptrclass, memclass) const rettype *
 
#define FUNC_P2VAR(rettype, ptrclass, memclass) rettype *
 
#define P2VAR(ptrtype, memclass, ptrclass) ptrtype *
 
#define P2CONST(ptrtype, memclass, ptrclass) const ptrtype *
 
#define CONSTP2VAR(ptrtype, memclass, ptrclass) ptrtype * const
 
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrtype * const
 
#define P2FUNC(rettype, ptrclass, fctname) rettype (* fctname)
 
#define CONSTP2FUNC(rettype, ptrclass, fctname) rettype (* const fctname)
 
#define CONST(consttype, memclass) const consttype
 
#define VAR(vartype, memclass) vartype
 
#define P2P2VAR(ptrtype, memclass, ptrclass) ptrtype **

#endif // BENBEN_AUTOSAR_STD_COMPILER_H