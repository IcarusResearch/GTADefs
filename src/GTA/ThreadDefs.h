#pragma once

#include "Rage/ThreadDefs.h"

namespace GTA {

	typedef class Thread : public Rage::Thread {

	public:
		BYTE unkPadding[0x08];		// 0x120
		Rage::JOAAT uScriptHash;	// 0x128
		BYTE padding[0x01];			// 0x130

	} Thread, *PThread;

}
