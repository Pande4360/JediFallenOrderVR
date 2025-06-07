#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HapticFeedbackEffect_Base.hpp"
#include "HapticFeedbackEffect_Curve.hpp"
void* _Script_Engine::HapticFeedbackEffect_Curve::get_HapticDetails() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::HapticFeedbackEffect_Curve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HapticFeedbackEffect_Curve");
    return result;
}
