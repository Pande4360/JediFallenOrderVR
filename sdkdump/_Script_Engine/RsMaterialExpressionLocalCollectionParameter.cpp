#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "RsMaterialExpressionLocalCollectionParameter.hpp"
#include "RsMaterialParameterLocalCollection.hpp"
_Script_Engine::RsMaterialParameterLocalCollection*& _Script_Engine::RsMaterialExpressionLocalCollectionParameter::get_Collection() {
    return *(_Script_Engine::RsMaterialParameterLocalCollection**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::RsMaterialExpressionLocalCollectionParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsMaterialExpressionLocalCollectionParameter");
    return result;
}
