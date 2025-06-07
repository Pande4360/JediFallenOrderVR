#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "VOIPStatics.hpp"
_Script_CoreUObject::Class* _Script_Engine::VOIPStatics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VOIPStatics");
    return result;
}
void _Script_Engine::VOIPStatics::SetMicThreshold(float InThreshold) {
    return;
}
