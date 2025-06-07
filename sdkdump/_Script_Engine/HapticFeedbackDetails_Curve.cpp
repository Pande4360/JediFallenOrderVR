#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HapticFeedbackDetails_Curve.hpp"
void* _Script_Engine::HapticFeedbackDetails_Curve::get_Frequency() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::HapticFeedbackDetails_Curve::get_Amplitude() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::HapticFeedbackDetails_Curve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.HapticFeedbackDetails_Curve");
    return result;
}
