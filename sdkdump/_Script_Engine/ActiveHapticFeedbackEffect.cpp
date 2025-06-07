#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActiveHapticFeedbackEffect.hpp"
#include "HapticFeedbackEffect_Base.hpp"
_Script_Engine::HapticFeedbackEffect_Base*& _Script_Engine::ActiveHapticFeedbackEffect::get_HapticEffect() {
    return *(_Script_Engine::HapticFeedbackEffect_Base**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::ActiveHapticFeedbackEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ActiveHapticFeedbackEffect");
    return result;
}
