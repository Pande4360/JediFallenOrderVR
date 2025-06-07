#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActiveForceFeedbackEffect.hpp"
#include "ForceFeedbackEffect.hpp"
_Script_Engine::ForceFeedbackEffect*& _Script_Engine::ActiveForceFeedbackEffect::get_ForceFeedbackEffect() {
    return *(_Script_Engine::ForceFeedbackEffect**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::ActiveForceFeedbackEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ActiveForceFeedbackEffect");
    return result;
}
