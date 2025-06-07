#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
#include "AsyncTaskDownloadImage.hpp"
void* _Script_UMG::AsyncTaskDownloadImage::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_UMG::AsyncTaskDownloadImage::get_OnFail() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_UMG::AsyncTaskDownloadImage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.AsyncTaskDownloadImage");
    return result;
}
_Script_UMG::AsyncTaskDownloadImage* _Script_UMG::AsyncTaskDownloadImage::DownloadImage(void* URL) {
    return;
}
