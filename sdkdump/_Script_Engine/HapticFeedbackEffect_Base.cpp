#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HapticFeedbackEffect_Base.hpp"
_Script_CoreUObject::Class* _Script_Engine::HapticFeedbackEffect_Base::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HapticFeedbackEffect_Base");
    return result;
}
