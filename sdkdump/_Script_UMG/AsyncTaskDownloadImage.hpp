#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct AsyncTaskDownloadImage : public _Script_Engine::BlueprintAsyncActionBase {
    private: char pad_30[0x20]; public:
    void* get_OnSuccess();
    void* get_OnFail();
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::AsyncTaskDownloadImage* DownloadImage(void* URL);
}; // Size: 0x50
#pragma pack(pop)
}
