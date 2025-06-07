#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsActorTweaksBook.hpp"
#include "RsMotionParmTweaksBook.hpp"
#include "RsTweaksBook.hpp"
void* _Script_RsTechRT::RsActorTweaksBook::get_AnalysisTweaks() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_RsTechRT::RsActorTweaksBook::get_UsingTweaks() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsActorTweaksBook::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsActorTweaksBook");
    return result;
}
_Script_RsTechRT::RsMotionParmTweaksBook*& _Script_RsTechRT::RsActorTweaksBook::get_MotionTweaks() {
    return *(_Script_RsTechRT::RsMotionParmTweaksBook**)((uintptr_t)this + 0xb0);
}
