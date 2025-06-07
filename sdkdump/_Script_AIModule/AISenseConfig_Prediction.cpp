#include "..\FUObjectArray.hpp"
#include "AISenseConfig.hpp"
#include "AISenseConfig_Prediction.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::AISenseConfig_Prediction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISenseConfig_Prediction");
    return result;
}
