#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISoundEventDescriptor.hpp"
float& _Script_RsGameTechRT::RsAISoundEventDescriptor::get_SoundRange() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISoundEventDescriptor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAISoundEventDescriptor");
    return result;
}
