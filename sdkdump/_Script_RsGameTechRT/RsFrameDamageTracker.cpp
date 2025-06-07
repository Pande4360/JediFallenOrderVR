#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsFrameDamageTracker.hpp"
void* _Script_RsGameTechRT::RsFrameDamageTracker::get_FrameDamageInfoMap() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsFrameDamageTracker::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsFrameDamageTracker");
    return result;
}
