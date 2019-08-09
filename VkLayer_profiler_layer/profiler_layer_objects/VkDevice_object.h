#pragma once
#include "VkQueue_object.h"
#include <vulkan/vk_layer.h>

namespace Profiler
{
    /***********************************************************************************\

    Class:
        VkDevice_Object

    Description:
        Extension to the VkDevice object, which holds additional information on the
        queues associated with the device and parent physical device object.

    \***********************************************************************************/
    struct VkDevice_Object
    {
        VkDevice                Device;
        VkPhysicalDevice        PhysicalDevice;
        PFN_vkGetDeviceProcAddr pfnGetDeviceProcAddr;
        VkDeviceQueues_Object   Queues;
    };
}
