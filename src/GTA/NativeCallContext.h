#pragma once

#include "Rage/NativeDefs.h"

namespace GTA {

	class NativeCallContext : public Rage::NativeCallContext {

	private:
		ULONG_PTR pReturnStack[10]{};
		ULONG_PTR pParamStack[500]{};

	public:
		NativeCallContext();

		template <typename T> VOID PushParameter(T value);
		template <typename T> T GetReturnValue();
		VOID Reset();

	};

	template<typename T>
	inline VOID NativeCallContext::PushParameter(T value) {
		*(T*)(&pParamStack[uParamCount++]) = value;
	}

	template<typename T>
	inline T NativeCallContext::GetReturnValue() {
		return *static_cast<T*>(pReturnValue);
	}

}
