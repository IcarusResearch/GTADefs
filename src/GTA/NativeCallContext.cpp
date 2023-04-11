#include "NativeCallContext.h"

GTA::NativeCallContext::NativeCallContext() {
	Reset();
}

VOID GTA::NativeCallContext::Reset() {
	pReturnValue = &pReturnStack[0];
	uDataCount = 0;
	uParamCount = 0;
	pParams = &pParamStack[0];
	memset(vecsOut, 0, sizeof(vecsOut));
	memset(vecsIn, 0, sizeof(vecsIn));
	memset(pReturnStack, 0, sizeof(pReturnStack));
	memset(pParamStack, 0, sizeof(pParamStack));
}
