#include "..\FUObjectArray.hpp"
#include "AkCallbackInfo.hpp"
#include "AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_AkAudio::AkComponent*& _Script_AkAudio::AkCallbackInfo::get_AkComponent() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkCallbackInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkCallbackInfo");
    return result;
}
