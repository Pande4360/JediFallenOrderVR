#include "..\FUObjectArray.hpp"
#include "BP_NavLink_JumpAcross_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAINavLink.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_NavLinks_BP_NavLink_JumpAcross::BP_NavLink_JumpAcross_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/NavLinks/BP_NavLink_JumpAcross.BP_NavLink_JumpAcross_C");
    return result;
}
