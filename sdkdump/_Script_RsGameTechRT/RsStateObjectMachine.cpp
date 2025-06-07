#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsSoftStateObject.hpp"
#include "RsStateObjectMachine.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsStateObjectMachine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsStateObjectMachine");
    return result;
}
_Script_RsGameTechRT::RsSoftStateObject*& _Script_RsGameTechRT::RsStateObjectMachine::get_CurrentState() {
    return *(_Script_RsGameTechRT::RsSoftStateObject**)((uintptr_t)this + 0x30);
}
_Script_RsGameTechRT::RsSoftStateObject*& _Script_RsGameTechRT::RsStateObjectMachine::get_PendingState() {
    return *(_Script_RsGameTechRT::RsSoftStateObject**)((uintptr_t)this + 0x38);
}
