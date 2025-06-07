#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LineBatchComponent.hpp"
#include "PrimitiveComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::LineBatchComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LineBatchComponent");
    return result;
}
