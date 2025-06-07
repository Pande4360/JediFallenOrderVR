#include "..\FUObjectArray.hpp"
#include "InterpTrackInstAkAudioRTPC.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\InterpTrackInst.hpp"
float& _Script_AkAudio::InterpTrackInstAkAudioRTPC::get_LastUpdatePosition() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AkAudio::InterpTrackInstAkAudioRTPC::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.InterpTrackInstAkAudioRTPC");
    return result;
}
