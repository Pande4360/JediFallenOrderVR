#include "..\FUObjectArray.hpp"
#include "SwPhysicsCollisionHandler_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsGamePhysicsCollisionHandler.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_SwPhysicsCollisionHandler::SwPhysicsCollisionHandler_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/SwPhysicsCollisionHandler.SwPhysicsCollisionHandler_C");
    return result;
}
