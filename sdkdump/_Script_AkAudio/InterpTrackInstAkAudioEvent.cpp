#include "..\FUObjectArray.hpp"
#include "InterpTrackInstAkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\InterpTrackInst.hpp"
float& _Script_AkAudio::InterpTrackInstAkAudioEvent::get_LastUpdatePosition() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AkAudio::InterpTrackInstAkAudioEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.InterpTrackInstAkAudioEvent");
    return result;
}
