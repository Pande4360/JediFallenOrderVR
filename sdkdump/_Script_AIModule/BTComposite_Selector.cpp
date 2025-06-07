#include "..\FUObjectArray.hpp"
#include "BTCompositeNode.hpp"
#include "BTComposite_Selector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BTComposite_Selector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTComposite_Selector");
    return result;
}
