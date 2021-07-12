/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(inference.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(6b379807a6b372c496941590b80459e6)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <wavelearner/inference.h>
// pydoc.h is automatically generated in the build directory
#include <inference_pydoc.h>

void bind_inference(py::module& m)
{

    using inference    = gr::wavelearner::inference;


    py::class_<inference,
        std::shared_ptr<inference>>(m, "inference", D(inference))

        .def(py::init(&inference::make),
           py::arg("plan_filepath"),
           py::arg("complex_input"),
           py::arg("input_vlen"),
           py::arg("output_vlen"),
           py::arg("batch_size"),
           D(inference,make)
        )
        



        ;




}








