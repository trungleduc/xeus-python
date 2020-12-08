/***************************************************************************
* Copyright (c) 2018, Martin Renou, Johan Mabille, Sylvain Corlay, and     *
* Wolf Vollprecht                                                          *
* Copyright (c) 2018, QuantStack                                           *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/


#ifndef XPYT_INTERNAL_UTILS_HPP
#define XPYT_INTERNAL_UTILS_HPP

#include <vector>

#include "xeus/xcomm.hpp"

#include "pybind11/pybind11.h"

namespace py = pybind11;


namespace xpyt
{
    std::string red_text(const std::string& text);
    std::string green_text(const std::string& text);
    std::string blue_text(const std::string& text);

    py::list zmq_buffers_to_pylist(const std::vector<zmq::message_t>& buffers);
    std::vector<zmq::message_t> pylist_to_zmq_buffers(const py::object& bufferlist);

    py::object cppmessage_to_pymessage(const xeus::xmessage& msg);
}

#endif
