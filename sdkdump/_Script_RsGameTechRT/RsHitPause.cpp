#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsHitPause.hpp"
float& _Script_RsGameTechRT::RsHitPause::get_Duration() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_RsGameTechRT::RsHitPause::get_HitPauseType() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsHitPause::get_AnimRate() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHitPause::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsHitPause");
    return result;
}
